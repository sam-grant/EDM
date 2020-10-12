void Br_err_175()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:58:31 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(128,1);
   __20->SetBinContent(129,1);
   __20->SetBinContent(130,5);
   __20->SetBinContent(131,4);
   __20->SetBinContent(132,16);
   __20->SetBinContent(133,22);
   __20->SetBinContent(134,31);
   __20->SetBinContent(135,65);
   __20->SetBinContent(136,64);
   __20->SetBinContent(137,80);
   __20->SetBinContent(138,92);
   __20->SetBinContent(139,98);
   __20->SetBinContent(140,94);
   __20->SetBinContent(141,108);
   __20->SetBinContent(142,98);
   __20->SetBinContent(143,59);
   __20->SetBinContent(144,62);
   __20->SetBinContent(145,36);
   __20->SetBinContent(146,28);
   __20->SetBinContent(147,13);
   __20->SetBinContent(148,9);
   __20->SetBinContent(149,7);
   __20->SetBinContent(150,2);
   __20->SetBinContent(151,3);
   __20->SetBinContent(152,1);
   __20->SetBinContent(154,1);
   __20->SetEntries(1000);
   __20->SetLineWidth(3);
   __20->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Experiments");
   __20->GetYaxis()->CenterTitle(true);
   __20->GetYaxis()->SetNdivisions(4000510);
   __20->GetYaxis()->SetLabelFont(42);
   __20->GetYaxis()->SetTitleSize(0.04);
   __20->GetYaxis()->SetTitleOffset(1.1);
   __20->GetYaxis()->SetTitleFont(42);
   __20->GetZaxis()->SetLabelFont(42);
   __20->GetZaxis()->SetTitleOffset(1);
   __20->GetZaxis()->SetTitleFont(42);
   __20->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
