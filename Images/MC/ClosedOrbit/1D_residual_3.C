void 1D_residual_3()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 20:03:59 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,45,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.4375,-8.793751,0.4375,79.14375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *h_res__3 = new TH1F("h_res__3","",100,-0.35,0.35);
   h_res__3->SetBinContent(47,30);
   h_res__3->SetBinContent(48,67);
   h_res__3->SetBinContent(49,50);
   h_res__3->SetBinContent(50,47);
   h_res__3->SetBinContent(51,34);
   h_res__3->SetBinContent(52,49);
   h_res__3->SetBinContent(53,45);
   h_res__3->SetBinContent(54,20);
   h_res__3->SetBinContent(55,9);
   h_res__3->SetBinContent(56,9);
   h_res__3->SetEntries(360);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.615,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_res");
   ptstats_LaTex->SetTextSize(0.0736);
   ptstats_LaTex = ptstats->AddText("Entries = 360    ");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.426e-10");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.01612");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   h_res__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_res__3);
   h_res__3->SetLineWidth(3);
   h_res__3->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__3->GetXaxis()->CenterTitle(true);
   h_res__3->GetXaxis()->SetLabelFont(42);
   h_res__3->GetXaxis()->SetTitleSize(0.04);
   h_res__3->GetXaxis()->SetTitleOffset(1.2);
   h_res__3->GetXaxis()->SetTitleFont(42);
   h_res__3->GetYaxis()->SetTitle("Entries");
   h_res__3->GetYaxis()->CenterTitle(true);
   h_res__3->GetYaxis()->SetNdivisions(4000510);
   h_res__3->GetYaxis()->SetLabelFont(42);
   h_res__3->GetYaxis()->SetTitleSize(0.04);
   h_res__3->GetYaxis()->SetTitleOffset(1.25);
   h_res__3->GetYaxis()->SetTitleFont(42);
   h_res__3->GetZaxis()->SetLabelFont(42);
   h_res__3->GetZaxis()->SetTitleOffset(1);
   h_res__3->GetZaxis()->SetTitleFont(42);
   h_res__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
