double Circle(double *x, double *par) {
  return sqrt(x[0] - par[0]);
}

void test() { 



  TCanvas *c = new TCanvas();//"c","c",1600,1200);

  TEllipse *e = new TEllipse(0,0,.1,.1);
  e->SetFillColor(42);
  e->Draw();  

  // Draw cir
  // Draw circle
/*  TF1 *f_circ = new TF1("circ", Circle, -8000, 8000, 1);
  f_circ->SetParameter(0, 7112);
  f_circ->Draw("l");*/

  return;


}