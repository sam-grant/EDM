void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",1000,0,4);
   __20->SetBinContent(101,1);
   __20->SetBinContent(103,1);
   __20->SetBinContent(104,8);
   __20->SetBinContent(105,15);
   __20->SetBinContent(106,26);
   __20->SetBinContent(107,77);
   __20->SetBinContent(108,118);
   __20->SetBinContent(109,149);
   __20->SetBinContent(110,183);
   __20->SetBinContent(111,154);
   __20->SetBinContent(112,107);
   __20->SetBinContent(113,77);
   __20->SetBinContent(114,44);
   __20->SetBinContent(115,21);
   __20->SetBinContent(116,14);
   __20->SetBinContent(117,5);
   __20->SetEntries(1000);
   __20->SetLineWidth(3);
   __20->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Trials");
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
