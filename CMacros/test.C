{

    TF1 *f0 = new TF1("f0", "[0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )", 0, 3000);
    f0->SetParameter(0, 0.08);
    f0->SetParameter(1, -1.3e-4);
    f0->SetLineColor(kRed);
    //f0->SetLineWidth(0);

    TF1 *f1 = new TF1("f1", "0.5369875 * [0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )", 0, 3000);
    f1->SetParameter(0, 0.08);
    f1->SetParameter(1, -1.3e-4);
    f1->SetLineColor(kBlue);


    TF1 *f2 = new TF1("f2", "f0-f1", 0, 3000);
    f2->SetLineColor(kGreen);

 /*   
    f1->SetParameter(0, 0.08);
    f1->SetParameter(1, -1.3e-4);

    TF1 *f2 = new TF1("f2", "0.1872314 * [0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )", 500, 750);
    f2->SetParameter(0, 0.08);
    f2->SetParameter(1, -1.3e-4);

   Double_t _fy1004[12] = {
   0.9869853,
   0.5369875,
   0.1872314,
   0.3409056,
   0.434128,
   0.4825065,
   0.5370046,
   0.5788672,
   0.5829089,
   0.6519206,
   0.7721434,
   0.8967653};*/

    TCanvas *c = new TCanvas();

    //f2->Draw();

    f0->Draw();//"same");
    f1->Draw("same");//"same");
    f2->Draw("same");

}