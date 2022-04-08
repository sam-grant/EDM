void S0_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.6664,-0.0001346721,3381.292,3.313218e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[11] = {
   451.4174,
   653.2518,
   879.8497,
   1123.213,
   1371.554,
   1620.87,
   1868.04,
   2116.623,
   2363.729,
   2615.648,
   2792.141};
   Double_t Graph0_fy1062[11] = {
   -1.594269e-05,
   -9.394901e-07,
   -4.139327e-08,
   -5.682459e-08,
   -6.709365e-08,
   -7.316556e-08,
   -3.063731e-07,
   -4.48628e-08,
   -1.077417e-06,
   -1.01798e-05,
   -5.076996e-05};
   Double_t Graph0_fex1062[11] = {
   0.1706777,
   0.144373,
   0.1050449,
   0.1026952,
   0.109309,
   0.1209298,
   0.1386789,
   0.1673729,
   0.2104643,
   0.263722,
   0.3316772};
   Double_t Graph0_fey1062[11] = {
   5.699878e-06,
   3.847507e-07,
   1.299568e-07,
   1.194742e-07,
   1.443443e-07,
   1.978364e-07,
   3.080828e-07,
   5.767886e-07,
   1.254515e-06,
   2.846065e-06,
   5.593476e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S0_",100,217.1241,3026.596);
   Graph_Graph01062->SetMinimum(-0.0001178917);
   Graph_Graph01062->SetMaximum(1.635175e-05);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(0,100);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
