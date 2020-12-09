void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,10);
   __11->SetBinContent(74,2);
   __11->SetBinContent(75,6);
   __11->SetBinContent(76,15);
   __11->SetBinContent(77,38);
   __11->SetBinContent(78,70);
   __11->SetBinContent(79,143);
   __11->SetBinContent(80,160);
   __11->SetBinContent(81,177);
   __11->SetBinContent(82,154);
   __11->SetBinContent(83,108);
   __11->SetBinContent(84,68);
   __11->SetBinContent(85,30);
   __11->SetBinContent(86,18);
   __11->SetBinContent(87,7);
   __11->SetBinContent(88,4);
   __11->SetEntries(1000);
   __11->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
