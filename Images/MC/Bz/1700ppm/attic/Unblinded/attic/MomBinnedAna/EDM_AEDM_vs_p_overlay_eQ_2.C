void EDM_AEDM_vs_p_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 11:49:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-377.2,-2.5,3394.8,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1110[14] = {
   0.3148656,
   0.01890063,
   0.06187858,
   0.0321008,
   -0.008492636,
   0.01815298,
   -0.03942819,
   -0.06834069,
   0.02503676,
   0.01419929,
   0.01102914,
   0.02168651,
   0.001554918,
   0.04797546};
   Double_t Graph0_fex1110[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1110[14] = {
   0.1579681,
   0.05429929,
   0.04087467,
   0.03544496,
   0.03201611,
   0.0293884,
   0.02733997,
   0.02573958,
   0.02478754,
   0.02410473,
   0.02370239,
   0.02356406,
   0.02442909,
   0.0340405};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010461110 = new TH1F("Graph_Graph_Graph010461110","",100,0,3280);
   Graph_Graph_Graph010461110->SetMinimum(-2);
   Graph_Graph_Graph010461110->SetMaximum(2);
   Graph_Graph_Graph010461110->SetDirectory(0);
   Graph_Graph_Graph010461110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010461110->SetLineColor(ci);
   Graph_Graph_Graph010461110->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph010461110->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph010461110->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010461110->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010461110->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010461110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010461110->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010461110->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph_Graph010461110->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010461110->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010461110->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010461110->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010461110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010461110->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010461110->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010461110->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010461110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010461110);
   
   gre->Draw("ap");
   
   Double_t Graph0_fx1111[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1111[14] = {
   0.1595241,
   -0.02521186,
   -0.03344861,
   0.0129326,
   -0.007813169,
   0.08965557,
   -0.02835398,
   -0.06549909,
   0.01433064,
   -0.008737176,
   0.0152789,
   0.009832407,
   -0.05816406,
   -0.07668114};
   Double_t Graph0_fex1111[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1111[14] = {
   0.1524637,
   0.05450967,
   0.04088848,
   0.03565865,
   0.03222368,
   0.02953731,
   0.02748831,
   0.02590778,
   0.02496928,
   0.02435271,
   0.0238668,
   0.02406088,
   0.02502227,
   0.03618933};
   gre = new TGraphErrors(14,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010761111 = new TH1F("Graph_Graph_Graph010761111","S12",100,0,3280);
   Graph_Graph_Graph010761111->SetMinimum(-0.1553563);
   Graph_Graph_Graph010761111->SetMaximum(0.3544736);
   Graph_Graph_Graph010761111->SetDirectory(0);
   Graph_Graph_Graph010761111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010761111->SetLineColor(ci);
   Graph_Graph_Graph010761111->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph010761111->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph010761111->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010761111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010761111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010761111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010761111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010761111->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph_Graph010761111->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010761111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010761111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010761111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010761111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010761111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010761111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010761111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010761111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010761111);
   
   gre->Draw("p ");
   
   Double_t Graph0_fx1112[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1112[14] = {
   -0.1887924,
   0.03810151,
   0.00812832,
   0.03029185,
   -0.08099077,
   -0.03463428,
   -0.02888397,
   0.01545309,
   0.01480588,
   -0.03476661,
   0.02703314,
   -0.008400433,
   0.02079221,
   -0.08275464};
   Double_t Graph0_fex1112[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1112[14] = {
   0.1551699,
   0.0546659,
   0.04088789,
   0.03570324,
   0.03231898,
   0.0297426,
   0.02765595,
   0.02610335,
   0.02508197,
   0.02446149,
   0.02422735,
   0.02448409,
   0.02559033,
   0.0371327};
   gre = new TGraphErrors(14,Graph0_fx1112,Graph0_fy1112,Graph0_fex1112,Graph0_fey1112);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph011061112 = new TH1F("Graph_Graph_Graph011061112","S18",100,0,3280);
   Graph_Graph_Graph011061112->SetMinimum(-0.3876354);
   Graph_Graph_Graph011061112->SetMaximum(0.1364404);
   Graph_Graph_Graph011061112->SetDirectory(0);
   Graph_Graph_Graph011061112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph011061112->SetLineColor(ci);
   Graph_Graph_Graph011061112->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph_Graph011061112->GetXaxis()->SetRange(1,92);
   Graph_Graph_Graph011061112->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph011061112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph011061112->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011061112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph011061112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph011061112->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph_Graph011061112->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph011061112->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph011061112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph011061112->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011061112->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph011061112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph011061112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph011061112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph011061112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph011061112);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
