void S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8475,-50.68775,2727.136,51.04511);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[22] = {
   367.3383,
   456.566,
   569.9738,
   694.4401,
   815.6403,
   938.5725,
   1062.713,
   1187.891,
   1312.687,
   1435.591,
   1562.019,
   1684.943,
   1810.534,
   1934.963,
   2060.319,
   2184.85,
   2308.939,
   2433.329,
   2560.086,
   2677.913,
   2780.761,
   2885.117};
   Double_t Graph0_fy1025[22] = {
   3.5212,
   -0.2807246,
   -0.0183089,
   0.145569,
   0.03294462,
   0.08015817,
   0.04353397,
   0.02371636,
   0.005493588,
   -0.01734913,
   -0.000609443,
   0.003086734,
   -0.009009729,
   0.006742848,
   -0.02307849,
   0.0357827,
   -0.02246948,
   -0.02030831,
   -0.05561345,
   0.06001271,
   -0.0166521,
   0.1786818};
   Double_t Graph0_fex1025[22] = {
   0.2758887,
   0.1401129,
   0.09337128,
   0.06458879,
   0.05290353,
   0.04783934,
   0.04561247,
   0.04414911,
   0.04516617,
   0.04561095,
   0.04898217,
   0.05212218,
   0.05891221,
   0.06491275,
   0.0746884,
   0.08261501,
   0.09596225,
   0.1164331,
   0.1370073,
   0.1562653,
   0.3178764,
   2.044752};
   Double_t Graph0_fey1025[22] = {
   2.4619,
   0.2622918,
   0.1288435,
   0.07814342,
   0.05502835,
   0.04569621,
   0.04015398,
   0.03636298,
   0.03436656,
   0.03271235,
   0.03265786,
   0.03186602,
   0.03324149,
   0.03383078,
   0.03563801,
   0.03615037,
   0.03788331,
   0.04099953,
   0.04221685,
   0.04564619,
   0.1100864,
   33.91095};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","S18",100,115.0524,3139.172);
   Graph_Graph01025->SetMinimum(-40.51446);
   Graph_Graph01025->SetMaximum(40.87183);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(21,79);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
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
