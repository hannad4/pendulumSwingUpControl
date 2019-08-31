
Jt = (Mp*(Lr^2)+Jr)*(Jp+.25*Mp*(Lp^2))-(.5*Mp*Lp*Lr)^2;
% State Space Representation
A = [0, 0, 1, 0;
     0, 0, 0, 1; 
     0, (1/(4*Jt))*((Mp^2)*(Lp^2)*Lr*g), (1/Jt)*(-Jp*Dr-.25*Mp*(Lp^2)*Dr), (1/(2*Jt))*(-Mp*Lp*Lr*Dp);
     0, (1/(2*Jt))*((Mp^2)*(Lr^2)*Lp*g+Jr*Mp*Lp*g), (1/(2*Jt))*(-Mp*Lp*Lr*Dr), (1/Jt)*(-Dp*Mp*(Lr^2)-Dp*Jr)];
B = [0;
     0;
     (1/Jt)*(Jp+.25*Mp*(Lp^2));
     (1/(2*Jt))*(Mp*Lp*Lr)];
C = eye(2,4);
D = zeros(2,1);

% Add actuator dynamics
A(3,3) = A(3,3) - Kg^2*kt*km/Rm*B(3);
A(4,3) = A(4,3) - Kg^2*kt*km/Rm*B(4);
B = Kg * kt * B / Rm;

e = eig(A);