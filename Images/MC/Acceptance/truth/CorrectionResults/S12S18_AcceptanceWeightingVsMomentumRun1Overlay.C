void S12S18_AcceptanceWeightingVsMomentumRun1Overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:39:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.3730393,3513.213,0.8911775);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_acceptanceWeightingVsMomentum_fx1009[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fy1009[12] = {
   -0.09095822,
   0.3357028,
   0.05243433,
   0.1333168,
   0.2142999,
   0.2656512,
   0.3070943,
   0.3393296,
   0.291349,
   0.3679669,
   0.5366302,
   0.6703247};
   Double_t S12S18_acceptanceWeightingVsMomentum_fex1009[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fey1009[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,S12S18_acceptanceWeightingVsMomentum_fx1009,S12S18_acceptanceWeightingVsMomentum_fy1009,S12S18_acceptanceWeightingVsMomentum_fex1009,S12S18_acceptanceWeightingVsMomentum_fey1009);
   gre->SetName("S12S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_acceptanceWeightingVsMomentum1009 = new TH1F("Graph_S12S18_acceptanceWeightingVsMomentum1009","S12S18",100,0,3122.856);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->SetMinimum(-0.2466176);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->SetMaximum(0.7647559);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->SetDirectory(0);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_acceptanceWeightingVsMomentum1009->SetLineColor(ci);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetXaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_acceptanceWeightingVsMomentum1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_acceptanceWeightingVsMomentum1009);
   
   gre->Draw("apl");
   
   Double_t S12S18_acceptanceWeightingVsMomentum_fx1010[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fy1010[12] = {
   -0.09095822,
   0.334869,
   0.0526853,
   0.1317445,
   0.2076241,
   0.2539899,
   0.2966336,
   0.3325923,
   0.2882276,
   0.3614267,
   0.4913225,
   0.6391815};
   Double_t S12S18_acceptanceWeightingVsMomentum_fex1010[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fey1010[12] = {
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
   gre = new TGraphErrors(12,S12S18_acceptanceWeightingVsMomentum_fx1010,S12S18_acceptanceWeightingVsMomentum_fy1010,S12S18_acceptanceWeightingVsMomentum_fex1010,S12S18_acceptanceWeightingVsMomentum_fey1010);
   gre->SetName("S12S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1b: S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_acceptanceWeightingVsMomentum1010 = new TH1F("Graph_S12S18_acceptanceWeightingVsMomentum1010","Run-1b: S12S18",100,0,3122.856);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->SetMinimum(-0.2435033);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->SetMaximum(0.7304983);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->SetDirectory(0);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_acceptanceWeightingVsMomentum1010->SetLineColor(ci);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetXaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_acceptanceWeightingVsMomentum1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_acceptanceWeightingVsMomentum1010);
   
   gre->Draw("pl ");
   
   Double_t S12S18_acceptanceWeightingVsMomentum_fx1011[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fy1011[12] = {
   -0.09095822,
   0.3321661,
   0.0496829,
   0.1274089,
   0.1964696,
   0.2423658,
   0.2852812,
   0.3164577,
   0.274798,
   0.3403728,
   0.4799642,
   0.6205041};
   Double_t S12S18_acceptanceWeightingVsMomentum_fex1011[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fey1011[12] = {
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
   gre = new TGraphErrors(12,S12S18_acceptanceWeightingVsMomentum_fx1011,S12S18_acceptanceWeightingVsMomentum_fy1011,S12S18_acceptanceWeightingVsMomentum_fex1011,S12S18_acceptanceWeightingVsMomentum_fey1011);
   gre->SetName("S12S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1c: S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_acceptanceWeightingVsMomentum1011 = new TH1F("Graph_S12S18_acceptanceWeightingVsMomentum1011","Run-1c: S12S18",100,0,3122.856);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->SetMinimum(-0.2416356);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->SetMaximum(0.7099531);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->SetDirectory(0);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_acceptanceWeightingVsMomentum1011->SetLineColor(ci);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetXaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_acceptanceWeightingVsMomentum1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_acceptanceWeightingVsMomentum1011);
   
   gre->Draw("pl ");
   
   Double_t S12S18_acceptanceWeightingVsMomentum_fx1012[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fy1012[12] = {
   -0.09095822,
   0.3365606,
   0.05296415,
   0.1344031,
   0.2050735,
   0.2530569,
   0.2994283,
   0.3279396,
   0.2875371,
   0.3532386,
   0.5064335,
   0.6610629};
   Double_t S12S18_acceptanceWeightingVsMomentum_fex1012[12] = {
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
   Double_t S12S18_acceptanceWeightingVsMomentum_fey1012[12] = {
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
   gre = new TGraphErrors(12,S12S18_acceptanceWeightingVsMomentum_fx1012,S12S18_acceptanceWeightingVsMomentum_fy1012,S12S18_acceptanceWeightingVsMomentum_fex1012,S12S18_acceptanceWeightingVsMomentum_fey1012);
   gre->SetName("S12S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1d: S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_acceptanceWeightingVsMomentum1012 = new TH1F("Graph_S12S18_acceptanceWeightingVsMomentum1012","Run-1d: S12S18",100,0,3122.856);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->SetMinimum(-0.2456914);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->SetMaximum(0.7545679);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->SetDirectory(0);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_acceptanceWeightingVsMomentum1012->SetLineColor(ci);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetXaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->CenterTitle(true);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_acceptanceWeightingVsMomentum1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_acceptanceWeightingVsMomentum1012);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.11,0.75,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_acceptanceWeightingVsMomentum","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_acceptanceWeightingVsMomentum","Run-1b","lpf");
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
   entry=leg->AddEntry("S12S18_acceptanceWeightingVsMomentum","Run-1c","lpf");
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
   entry=leg->AddEntry("S12S18_acceptanceWeightingVsMomentum","Run-1d","lpf");
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
