void dBr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 18:20:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__4 = new TH1D("__4","Number of sub-runs: 100",300,0,3);
   __4->SetBinContent(78,1);
   __4->SetBinContent(79,1);
   __4->SetBinContent(80,3);
   __4->SetBinContent(81,5);
   __4->SetBinContent(82,8);
   __4->SetBinContent(83,16);
   __4->SetBinContent(84,31);
   __4->SetBinContent(85,41);
   __4->SetBinContent(86,73);
   __4->SetBinContent(87,81);
   __4->SetBinContent(88,97);
   __4->SetBinContent(89,109);
   __4->SetBinContent(90,102);
   __4->SetBinContent(91,104);
   __4->SetBinContent(92,68);
   __4->SetBinContent(93,70);
   __4->SetBinContent(94,70);
   __4->SetBinContent(95,38);
   __4->SetBinContent(96,34);
   __4->SetBinContent(97,16);
   __4->SetBinContent(98,14);
   __4->SetBinContent(99,8);
   __4->SetBinContent(100,6);
   __4->SetBinContent(101,1);
   __4->SetBinContent(102,3);
   __4->SetEntries(1000);
   __4->SetLineWidth(3);
   __4->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   __4->GetXaxis()->CenterTitle(true);
   __4->GetXaxis()->SetLabelFont(42);
   __4->GetXaxis()->SetTitleSize(0.04);
   __4->GetXaxis()->SetTitleOffset(1.1);
   __4->GetXaxis()->SetTitleFont(42);
   __4->GetYaxis()->SetTitle("Experiments");
   __4->GetYaxis()->CenterTitle(true);
   __4->GetYaxis()->SetNdivisions(4000510);
   __4->GetYaxis()->SetLabelFont(42);
   __4->GetYaxis()->SetTitleSize(0.04);
   __4->GetYaxis()->SetTitleOffset(1.1);
   __4->GetYaxis()->SetTitleFont(42);
   __4->GetZaxis()->SetLabelFont(42);
   __4->GetZaxis()->SetTitleOffset(1);
   __4->GetZaxis()->SetTitleFont(42);
   __4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
