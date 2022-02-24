{

    TF1 *fit = new TF1("fit", "[0]+[1]*x+[2]*x*x", -50, 50);
    fit->SetParameter(0, 1);
    fit->SetParameter(1, 1);
    fit->SetParameter(2, 1);

    TCanvas *c = new TCanvas();
    fit->Draw();

}