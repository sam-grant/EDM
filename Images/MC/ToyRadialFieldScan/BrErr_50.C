void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",1000,0,10);
   __5->SetBinContent(73,1);
   __5->SetBinContent(74,2);
   __5->SetBinContent(75,10);
   __5->SetBinContent(76,14);
   __5->SetBinContent(77,24);
   __5->SetBinContent(78,49);
   __5->SetBinContent(79,70);
   __5->SetBinContent(80,85);
   __5->SetBinContent(81,105);
   __5->SetBinContent(82,124);
   __5->SetBinContent(83,119);
   __5->SetBinContent(84,114);
   __5->SetBinContent(85,78);
   __5->SetBinContent(86,65);
   __5->SetBinContent(87,56);
   __5->SetBinContent(88,33);
   __5->SetBinContent(89,16);
   __5->SetBinContent(90,12);
   __5->SetBinContent(91,16);
   __5->SetBinContent(92,5);
   __5->SetBinContent(93,2);
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
