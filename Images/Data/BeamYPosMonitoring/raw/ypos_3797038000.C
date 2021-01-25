void ypos_3797038000()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jan 24 01:26:13 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(37962.5,74.5656,38007.5,74.80511);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[26] = {
   37970,
   37971,
   37972,
   37973,
   37974,
   37975,
   37976,
   37977,
   37978,
   37979,
   37980,
   37981,
   37982,
   37983,
   37986,
   37987,
   37988,
   37989,
   37990,
   37991,
   37993,
   37995,
   37996,
   37997,
   37999,
   38000};
   Double_t Graph0_fy1001[26] = {
   74.70282,
   74.71727,
   74.70544,
   74.71975,
   74.72449,
   74.72721,
   74.69375,
   74.71227,
   74.72966,
   74.72121,
   74.73315,
   74.7052,
   74.72693,
   74.71496,
   74.72099,
   74.71319,
   74.72365,
   74.68536,
   74.73915,
   74.66199,
   74.71863,
   74.70072,
   74.70305,
   74.68392,
   74.66841,
   74.73952};
   Double_t Graph0_fex1001[26] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[26] = {
   0.009848177,
   0.01233053,
   0.01074715,
   0.01068768,
   0.01162117,
   0.009708353,
   0.01080452,
   0.01074345,
   0.01078073,
   0.01011191,
   0.0106213,
   0.008371435,
   0.008281657,
   0.01205189,
   0.008746089,
   0.01143458,
   0.009459191,
   0.07983817,
   0.01178592,
   0.01937173,
   0.00747565,
   0.007493144,
   0.007702967,
   0.05098798,
   0.02764867,
   0.01499487};
   TGraphErrors *gre = new TGraphErrors(26,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,37967,38003);
   Graph_Graph01001->SetMinimum(74.58955);
   Graph_Graph01001->SetMaximum(74.78116);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("Run number");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
