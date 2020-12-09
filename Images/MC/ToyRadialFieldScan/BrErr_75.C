void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,10);
   __8->SetBinContent(83,1);
   __8->SetBinContent(84,1);
   __8->SetBinContent(85,6);
   __8->SetBinContent(86,10);
   __8->SetBinContent(87,25);
   __8->SetBinContent(88,33);
   __8->SetBinContent(89,56);
   __8->SetBinContent(90,83);
   __8->SetBinContent(91,110);
   __8->SetBinContent(92,126);
   __8->SetBinContent(93,133);
   __8->SetBinContent(94,124);
   __8->SetBinContent(95,107);
   __8->SetBinContent(96,77);
   __8->SetBinContent(97,45);
   __8->SetBinContent(98,25);
   __8->SetBinContent(99,22);
   __8->SetBinContent(100,10);
   __8->SetBinContent(101,2);
   __8->SetBinContent(102,2);
   __8->SetBinContent(104,1);
   __8->SetBinContent(105,1);
   __8->SetEntries(1000);
   __8->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{Bkg}#GT [ppm]");
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
