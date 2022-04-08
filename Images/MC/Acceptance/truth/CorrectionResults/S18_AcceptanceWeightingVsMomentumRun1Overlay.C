void S18_AcceptanceWeightingVsMomentumRun1Overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:39:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-390.357,-0.3638869,3513.213,0.8454153);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_acceptanceWeightingVsMomentum_fx1005[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fy1005[12] = {
   -0.09095822,
   0.3464323,
   0.07403523,
   0.1592478,
   0.24026,
   0.2915348,
   0.3361259,
   0.367683,
   0.3250353,
   0.4212537,
   0.5715739,
   0.6337149};
   Double_t S18_acceptanceWeightingVsMomentum_fex1005[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fey1005[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,S18_acceptanceWeightingVsMomentum_fx1005,S18_acceptanceWeightingVsMomentum_fy1005,S18_acceptanceWeightingVsMomentum_fex1005,S18_acceptanceWeightingVsMomentum_fey1005);
   gre->SetName("S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_acceptanceWeightingVsMomentum1005 = new TH1F("Graph_S18_acceptanceWeightingVsMomentum1005","S18",100,0,3122.856);
   Graph_S18_acceptanceWeightingVsMomentum1005->SetMinimum(-0.2429566);
   Graph_S18_acceptanceWeightingVsMomentum1005->SetMaximum(0.7244851);
   Graph_S18_acceptanceWeightingVsMomentum1005->SetDirectory(0);
   Graph_S18_acceptanceWeightingVsMomentum1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_acceptanceWeightingVsMomentum1005->SetLineColor(ci);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_acceptanceWeightingVsMomentum1005->GetXaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetXaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetXaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetYaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetZaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetZaxis()->SetTitleOffset(1);
   Graph_S18_acceptanceWeightingVsMomentum1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_acceptanceWeightingVsMomentum1005);
   
   gre->Draw("apl");
   
   Double_t S18_acceptanceWeightingVsMomentum_fx1006[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fy1006[12] = {
   -0.09095822,
   0.3466995,
   0.07385432,
   0.1582677,
   0.2366509,
   0.2830279,
   0.3286099,
   0.3636513,
   0.3237709,
   0.4200772,
   0.5518688,
   0.609185};
   Double_t S18_acceptanceWeightingVsMomentum_fex1006[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fey1006[12] = {
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
   gre = new TGraphErrors(12,S18_acceptanceWeightingVsMomentum_fx1006,S18_acceptanceWeightingVsMomentum_fy1006,S18_acceptanceWeightingVsMomentum_fex1006,S18_acceptanceWeightingVsMomentum_fey1006);
   gre->SetName("S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1b: S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_acceptanceWeightingVsMomentum1006 = new TH1F("Graph_S18_acceptanceWeightingVsMomentum1006","Run-1b: S18",100,0,3122.856);
   Graph_S18_acceptanceWeightingVsMomentum1006->SetMinimum(-0.2405036);
   Graph_S18_acceptanceWeightingVsMomentum1006->SetMaximum(0.6975022);
   Graph_S18_acceptanceWeightingVsMomentum1006->SetDirectory(0);
   Graph_S18_acceptanceWeightingVsMomentum1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_acceptanceWeightingVsMomentum1006->SetLineColor(ci);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_acceptanceWeightingVsMomentum1006->GetXaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetXaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetXaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetYaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetZaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetZaxis()->SetTitleOffset(1);
   Graph_S18_acceptanceWeightingVsMomentum1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_acceptanceWeightingVsMomentum1006);
   
   gre->Draw("pl ");
   
   Double_t S18_acceptanceWeightingVsMomentum_fx1007[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fy1007[12] = {
   -0.09095822,
   0.3445703,
   0.07146943,
   0.1537422,
   0.2261644,
   0.2730133,
   0.3192007,
   0.3505603,
   0.3134909,
   0.4036017,
   0.5440012,
   0.590517};
   Double_t S18_acceptanceWeightingVsMomentum_fex1007[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fey1007[12] = {
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
   gre = new TGraphErrors(12,S18_acceptanceWeightingVsMomentum_fx1007,S18_acceptanceWeightingVsMomentum_fy1007,S18_acceptanceWeightingVsMomentum_fex1007,S18_acceptanceWeightingVsMomentum_fey1007);
   gre->SetName("S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1c: S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_acceptanceWeightingVsMomentum1007 = new TH1F("Graph_S18_acceptanceWeightingVsMomentum1007","Run-1c: S18",100,0,3122.856);
   Graph_S18_acceptanceWeightingVsMomentum1007->SetMinimum(-0.2386368);
   Graph_S18_acceptanceWeightingVsMomentum1007->SetMaximum(0.6769673);
   Graph_S18_acceptanceWeightingVsMomentum1007->SetDirectory(0);
   Graph_S18_acceptanceWeightingVsMomentum1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_acceptanceWeightingVsMomentum1007->SetLineColor(ci);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_acceptanceWeightingVsMomentum1007->GetXaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetXaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetXaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetYaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetZaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetZaxis()->SetTitleOffset(1);
   Graph_S18_acceptanceWeightingVsMomentum1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_acceptanceWeightingVsMomentum1007);
   
   gre->Draw("pl ");
   
   Double_t S18_acceptanceWeightingVsMomentum_fx1008[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fy1008[12] = {
   -0.09095822,
   0.3477825,
   0.07269067,
   0.1596469,
   0.2329045,
   0.2809839,
   0.3296777,
   0.3603857,
   0.3244822,
   0.4090842,
   0.5532332,
   0.5898114};
   Double_t S18_acceptanceWeightingVsMomentum_fex1008[12] = {
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
   Double_t S18_acceptanceWeightingVsMomentum_fey1008[12] = {
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
   gre = new TGraphErrors(12,S18_acceptanceWeightingVsMomentum_fx1008,S18_acceptanceWeightingVsMomentum_fy1008,S18_acceptanceWeightingVsMomentum_fex1008,S18_acceptanceWeightingVsMomentum_fey1008);
   gre->SetName("S18_acceptanceWeightingVsMomentum");
   gre->SetTitle("Run-1d: S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#993399");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#993399");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_acceptanceWeightingVsMomentum1008 = new TH1F("Graph_S18_acceptanceWeightingVsMomentum1008","Run-1d: S18",100,0,3122.856);
   Graph_S18_acceptanceWeightingVsMomentum1008->SetMinimum(-0.2385663);
   Graph_S18_acceptanceWeightingVsMomentum1008->SetMaximum(0.6761912);
   Graph_S18_acceptanceWeightingVsMomentum1008->SetDirectory(0);
   Graph_S18_acceptanceWeightingVsMomentum1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_acceptanceWeightingVsMomentum1008->SetLineColor(ci);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_acceptanceWeightingVsMomentum1008->GetXaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetXaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetXaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->SetTitle("Acceptance weighting / 250 MeV");
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->CenterTitle(true);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetYaxis()->SetTitleFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetZaxis()->SetLabelFont(42);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetZaxis()->SetTitleOffset(1);
   Graph_S18_acceptanceWeightingVsMomentum1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_acceptanceWeightingVsMomentum1008);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.11,0.75,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_acceptanceWeightingVsMomentum","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_acceptanceWeightingVsMomentum","Run-1b","lpf");
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
   entry=leg->AddEntry("S18_acceptanceWeightingVsMomentum","Run-1c","lpf");
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
   entry=leg->AddEntry("S18_acceptanceWeightingVsMomentum","Run-1d","lpf");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
