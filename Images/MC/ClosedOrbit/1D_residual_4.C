void 1D_residual_4()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 25 05:04:57 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",1120,480,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.4375,-17.45625,0.4375,157.1063);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *h_res__5 = new TH1F("h_res__5","",100,-0.35,0.35);
   h_res__5->SetBinContent(49,46);
   h_res__5->SetBinContent(50,130);
   h_res__5->SetBinContent(51,133);
   h_res__5->SetBinContent(52,51);
   h_res__5->SetEntries(360);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.615,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("h_res");
   ptstats_LaTex->SetTextSize(0.0736);
   ptstats_LaTex = ptstats->AddText("Entries = 360    ");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.822e-10");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.005999");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   h_res__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h_res__5);
   h_res__5->SetLineWidth(3);
   h_res__5->GetXaxis()->SetTitle("Fit residual [mm]");
   h_res__5->GetXaxis()->CenterTitle(true);
   h_res__5->GetXaxis()->SetLabelFont(42);
   h_res__5->GetXaxis()->SetTitleSize(0.04);
   h_res__5->GetXaxis()->SetTitleOffset(1.2);
   h_res__5->GetXaxis()->SetTitleFont(42);
   h_res__5->GetYaxis()->SetTitle("Entries");
   h_res__5->GetYaxis()->CenterTitle(true);
   h_res__5->GetYaxis()->SetNdivisions(4000510);
   h_res__5->GetYaxis()->SetLabelFont(42);
   h_res__5->GetYaxis()->SetTitleSize(0.04);
   h_res__5->GetYaxis()->SetTitleOffset(1.25);
   h_res__5->GetYaxis()->SetTitleFont(42);
   h_res__5->GetZaxis()->SetLabelFont(42);
   h_res__5->GetZaxis()->SetTitleOffset(1);
   h_res__5->GetZaxis()->SetTitleFont(42);
   h_res__5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
