void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",1000,0,10);
   __5->SetBinContent(102,3);
   __5->SetBinContent(103,1);
   __5->SetBinContent(104,4);
   __5->SetBinContent(105,8);
   __5->SetBinContent(106,12);
   __5->SetBinContent(107,37);
   __5->SetBinContent(108,39);
   __5->SetBinContent(109,50);
   __5->SetBinContent(110,69);
   __5->SetBinContent(111,74);
   __5->SetBinContent(112,73);
   __5->SetBinContent(113,106);
   __5->SetBinContent(114,80);
   __5->SetBinContent(115,76);
   __5->SetBinContent(116,76);
   __5->SetBinContent(117,67);
   __5->SetBinContent(118,54);
   __5->SetBinContent(119,45);
   __5->SetBinContent(120,35);
   __5->SetBinContent(121,33);
   __5->SetBinContent(122,21);
   __5->SetBinContent(123,15);
   __5->SetBinContent(124,10);
   __5->SetBinContent(125,6);
   __5->SetBinContent(126,2);
   __5->SetBinContent(128,3);
   __5->SetBinContent(131,1);
   __5->SetEntries(1000);
   __5->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
