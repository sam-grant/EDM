void S18_eAEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9393,-0.2631374,2726.713,2.570162);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[22] = {
   367.4384,
   456.6742,
   569.9843,
   694.4365,
   815.6608,
   938.5888,
   1062.745,
   1187.919,
   1312.68,
   1435.613,
   1562.048,
   1684.958,
   1810.533,
   1934.893,
   2060.323,
   2184.82,
   2308.919,
   2433.329,
   2560.044,
   2678.053,
   2781.14,
   2885.139};
   Double_t Graph0_fy1034[22] = {
   2.080978,
   0.1852341,
   0.09060303,
   0.0552967,
   0.03886891,
   0.03217426,
   0.02833993,
   0.0256056,
   0.024209,
   0.02309051,
   0.0229964,
   0.02243614,
   0.0233551,
   0.02376931,
   0.02504677,
   0.02538949,
   0.02659595,
   0.02873898,
   0.03007304,
   0.03238804,
   0.08194958,
   1.787035};
   Double_t Graph0_fex1034[22] = {
   0.2542597,
   0.1282116,
   0.08547603,
   0.05911733,
   0.04831604,
   0.04372754,
   0.04164599,
   0.04029718,
   0.04118659,
   0.04161464,
   0.04467129,
   0.04750509,
   0.05365686,
   0.05907108,
   0.06800638,
   0.07506477,
   0.08707378,
   0.1057475,
   0.124273,
   0.1422437,
   0.2927081,
   1.562872};
   Double_t Graph0_fey1034[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S18",100,115.2323,3138.654);
   Graph_Graph01034->SetMinimum(0.02019252);
   Graph_Graph01034->SetMaximum(2.286832);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(21,79);
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
   gre->Draw("alp");
   
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
