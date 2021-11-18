void S0_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522.1632,10.08974,2726.852,26.55539);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[12] = {
   177.9576,
   433.3462,
   628.2616,
   873.0121,
   1121.62,
   1371.471,
   1620.486,
   1868.641,
   2117.771,
   2364.099,
   2613.028,
   2828.705};
   Double_t Graph0_fy1029[12] = {
   23.16416,
   13.40992,
   13.10746,
   12.93266,
   12.84876,
   12.87037,
   12.97794,
   12.99698,
   12.97526,
   13.07289,
   13.16779,
   12.95291};
   Double_t Graph0_fex1029[12] = {
   1.2686,
   0.1197282,
   0.1082326,
   0.1088648,
   0.1169708,
   0.126421,
   0.13867,
   0.1576269,
   0.1843168,
   0.2260863,
   0.2983604,
   0.3582004};
   Double_t Graph0_fey1029[12] = {
   0.6469528,
   0.0239003,
   0.01405347,
   0.0138353,
   0.01474272,
   0.01597858,
   0.01770358,
   0.02014734,
   0.02354596,
   0.02924767,
   0.03872309,
   0.06146623};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S0_",100,0,3094.301);
   Graph_Graph01029->SetMinimum(11.7363);
   Graph_Graph01029->SetMaximum(24.90883);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(25,81);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
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
