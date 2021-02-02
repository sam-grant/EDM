void 1D_residual_3()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  1 16:55:21 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,45,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.4375,-9.712501,0.4375,87.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *h_res__4 = new TH1F("h_res__4","",100,-0.35,0.35);
   h_res__4->SetBinContent(47,6);
   h_res__4->SetBinContent(48,54);
   h_res__4->SetBinContent(49,74);
   h_res__4->SetBinContent(50,44);
   h_res__4->SetBinContent(51,64);
   h_res__4->SetBinContent(52,56);
   h_res__4->SetBinContent(53,35);
   h_res__4->SetBinContent(54,27);
   h_res__4->SetEntries(360);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.615,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_res");
   ptstats_LaTex->SetTextSize(0.0736);
   ptstats_LaTex = ptstats->AddText("Entries = 360    ");
   ptstats_LaTex = ptstats->AddText("Mean  = -9.733e-11");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.01305");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   h_res__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_res__4);
   h_res__4->SetLineWidth(3);
   h_res__4->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__4->GetXaxis()->CenterTitle(true);
   h_res__4->GetXaxis()->SetLabelFont(42);
   h_res__4->GetXaxis()->SetTitleSize(0.04);
   h_res__4->GetXaxis()->SetTitleOffset(1.2);
   h_res__4->GetXaxis()->SetTitleFont(42);
   h_res__4->GetYaxis()->SetTitle("Entries");
   h_res__4->GetYaxis()->CenterTitle(true);
   h_res__4->GetYaxis()->SetNdivisions(4000510);
   h_res__4->GetYaxis()->SetLabelFont(42);
   h_res__4->GetYaxis()->SetTitleSize(0.04);
   h_res__4->GetYaxis()->SetTitleOffset(1.25);
   h_res__4->GetYaxis()->SetTitleFont(42);
   h_res__4->GetZaxis()->SetLabelFont(42);
   h_res__4->GetZaxis()->SetTitleOffset(1);
   h_res__4->GetZaxis()->SetTitleFont(42);
   h_res__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
