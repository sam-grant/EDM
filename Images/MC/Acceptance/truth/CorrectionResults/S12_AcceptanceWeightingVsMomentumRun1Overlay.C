void S12_AcceptanceWeightingVsMomentumRun1Overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:39:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.3808257,3513.213,0.9301096);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_acceptanceWeightingVsMomentum_fx1001[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t S12_acceptanceWeightingVsMomentum_fy1001[12] = {
   -0.09095822,
   0.3628046,
   0.09995075,
   0.1947991,
   0.2803181,
   0.3273652,
   0.3877865,
   0.4309049,
   0.3735964,
   0.508523,
   0.6547029,
   0.7014704};
   Double_t S12_acceptanceWeightingVsMomentum_fex1001[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_acceptanceWeightingVsMomentum_fey1001[12] = {
   0.07137827,
   0.02860333,
   0.02109046,
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124,
   0.01015001};
   TGraphErrors *gre = new TGraphErrors(12,S12_acceptanceWeightingVsMomentum_fx1001,S12_acceptanceWeightingVsMomentum_fy1001,S12_acceptanceWeightingVsMomentum_fex1001,S12_acceptanceWeightingVsMomentum_fey1001);
   gre->SetName("S12_acceptanceWeightingVsMomentum");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_acceptanceWeightingVsMomentum1001 = new TH1F("Graph_S12_acceptanceWeightingVsMomentum1001","S12",100,0,3122.856);
   Graph_S12_acceptanceWeightingVsMomentum1001->SetMinimum(-0.2497322);
   Graph_S12_acceptanceWeightingVsMomentum1001->SetMaximum(0.7990161);
   Graph_S12_acceptanceWeightingVsMomentum1001->SetDirectory(0);
   Graph_S12_acceptanceWeightingVsMomentum1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_acceptanceWeightingVsMomentum1001->SetLineColor(ci);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_acceptanceWeightingVsMomentum1001->GetXaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetXaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetXaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetYaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetZaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12_acceptanceWeightingVsMomentum1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_acceptanceWeightingVsMomentum1001);
   
   gre->Draw("apl");
   
   Double_t S12_acceptanceWeightingVsMomentum_fx1002[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t S12_acceptanceWeightingVsMomentum_fy1002[12] = {
   -0.09095822,
   0.3654041,
   0.1019934,
   0.1967262,
   0.2794843,
   0.3233164,
   0.3838737,
   0.4305386,
   0.3735395,
   0.5079765,
   0.6457924,
   0.6845217};
   Double_t S12_acceptanceWeightingVsMomentum_fex1002[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_acceptanceWeightingVsMomentum_fey1002[12] = {
   0.07137827,
   0.02860333,
   0.02109046,
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124,
   0.01015001};
   gre = new TGraphErrors(12,S12_acceptanceWeightingVsMomentum_fx1002,S12_acceptanceWeightingVsMomentum_fy1002,S12_acceptanceWeightingVsMomentum_fex1002,S12_acceptanceWeightingVsMomentum_fey1002);
   gre->SetName("S12_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1b: S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_acceptanceWeightingVsMomentum1002 = new TH1F("Graph_S12_acceptanceWeightingVsMomentum1002","Run-1b: S12",100,0,3122.856);
   Graph_S12_acceptanceWeightingVsMomentum1002->SetMinimum(-0.2480373);
   Graph_S12_acceptanceWeightingVsMomentum1002->SetMaximum(0.7803725);
   Graph_S12_acceptanceWeightingVsMomentum1002->SetDirectory(0);
   Graph_S12_acceptanceWeightingVsMomentum1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_acceptanceWeightingVsMomentum1002->SetLineColor(ci);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_acceptanceWeightingVsMomentum1002->GetXaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetXaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetXaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetYaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetZaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetZaxis()->SetTitleOffset(1);
   Graph_S12_acceptanceWeightingVsMomentum1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_acceptanceWeightingVsMomentum1002);
   
   gre->Draw("pl ");
   
   Double_t S12_acceptanceWeightingVsMomentum_fx1003[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t S12_acceptanceWeightingVsMomentum_fy1003[12] = {
   -0.09095822,
   0.3640199,
   0.1010113,
   0.1936501,
   0.2723962,
   0.3164575,
   0.3749942,
   0.4238357,
   0.3660274,
   0.4969743,
   0.6474393,
   0.703828};
   Double_t S12_acceptanceWeightingVsMomentum_fex1003[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_acceptanceWeightingVsMomentum_fey1003[12] = {
   0.07137827,
   0.02860333,
   0.02109046,
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124,
   0.01015001};
   gre = new TGraphErrors(12,S12_acceptanceWeightingVsMomentum_fx1003,S12_acceptanceWeightingVsMomentum_fy1003,S12_acceptanceWeightingVsMomentum_fex1003,S12_acceptanceWeightingVsMomentum_fey1003);
   gre->SetName("S12_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1c: S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_acceptanceWeightingVsMomentum1003 = new TH1F("Graph_S12_acceptanceWeightingVsMomentum1003","Run-1c: S12",100,0,3122.856);
   Graph_S12_acceptanceWeightingVsMomentum1003->SetMinimum(-0.2499679);
   Graph_S12_acceptanceWeightingVsMomentum1003->SetMaximum(0.8016095);
   Graph_S12_acceptanceWeightingVsMomentum1003->SetDirectory(0);
   Graph_S12_acceptanceWeightingVsMomentum1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_acceptanceWeightingVsMomentum1003->SetLineColor(ci);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_acceptanceWeightingVsMomentum1003->GetXaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetXaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetXaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetYaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetZaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetZaxis()->SetTitleOffset(1);
   Graph_S12_acceptanceWeightingVsMomentum1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_acceptanceWeightingVsMomentum1003);
   
   gre->Draw("pl ");
   
   Double_t S12_acceptanceWeightingVsMomentum_fx1004[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t S12_acceptanceWeightingVsMomentum_fy1004[12] = {
   -0.09095822,
   0.3651271,
   0.1000168,
   0.1969673,
   0.2763939,
   0.3228251,
   0.3814122,
   0.432272,
   0.3742054,
   0.5014459,
   0.6524743,
   0.6984852};
   Double_t S12_acceptanceWeightingVsMomentum_fex1004[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_acceptanceWeightingVsMomentum_fey1004[12] = {
   0.07137827,
   0.02860333,
   0.02109046,
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124,
   0.01015001};
   gre = new TGraphErrors(12,S12_acceptanceWeightingVsMomentum_fx1004,S12_acceptanceWeightingVsMomentum_fy1004,S12_acceptanceWeightingVsMomentum_fex1004,S12_acceptanceWeightingVsMomentum_fey1004);
   gre->SetName("S12_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1d: S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_acceptanceWeightingVsMomentum1004 = new TH1F("Graph_S12_acceptanceWeightingVsMomentum1004","Run-1d: S12",100,0,3122.856);
   Graph_S12_acceptanceWeightingVsMomentum1004->SetMinimum(-0.2494337);
   Graph_S12_acceptanceWeightingVsMomentum1004->SetMaximum(0.7957323);
   Graph_S12_acceptanceWeightingVsMomentum1004->SetDirectory(0);
   Graph_S12_acceptanceWeightingVsMomentum1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_acceptanceWeightingVsMomentum1004->SetLineColor(ci);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_acceptanceWeightingVsMomentum1004->GetXaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetXaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetXaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->CenterTitle(true);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetYaxis()->SetTitleFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetZaxis()->SetLabelFont(42);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetZaxis()->SetTitleOffset(1);
   Graph_S12_acceptanceWeightingVsMomentum1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_acceptanceWeightingVsMomentum1004);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.11,0.75,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_acceptanceWeightingVsMomentum","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_acceptanceWeightingVsMomentum","Run-1b","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_acceptanceWeightingVsMomentum","Run-1c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_acceptanceWeightingVsMomentum","Run-1d","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#993399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
