void S12_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 11:03:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7285,-0.3093496,3407.245,1.362336);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1096[11] = {
   451.6071,
   653.3642,
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236,
   2787.767};
   Double_t Graph0_fy1096[11] = {
   0.3524082,
   0.1170164,
   -0.00686156,
   -0.02780487,
   -0.00193816,
   0.004933441,
   -0.02477244,
   0.01729616,
   0.01360406,
   -0.01361644,
   -0.06062827};
   Double_t Graph0_fex1096[11] = {
   0.1407973,
   0.1187308,
   0.08605139,
   0.08406349,
   0.08952839,
   0.09891721,
   0.1153197,
   0.1443421,
   0.1883724,
   0.231567,
   0.2840143};
   Double_t Graph0_fey1096[11] = {
   0.1865234,
   0.06315765,
   0.03613776,
   0.0296946,
   0.02712323,
   0.02594047,
   0.02619752,
   0.02801873,
   0.03102907,
   0.03226931,
   0.07663022};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1096,Graph0_fy1096,Graph0_fex1096,Graph0_fey1096);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01096 = new TH1F("Graph_Graph01096","S12_",100,217.8079,3021.709);
   Graph_Graph01096->SetMinimum(-0.142181);
   Graph_Graph01096->SetMaximum(1.195168);
   Graph_Graph01096->SetDirectory(0);
   Graph_Graph01096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01096->SetLineColor(ci);
   Graph_Graph01096->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01096->GetXaxis()->SetRange(0,101);
   Graph_Graph01096->GetXaxis()->CenterTitle(true);
   Graph_Graph01096->GetXaxis()->SetLabelFont(42);
   Graph_Graph01096->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01096->GetXaxis()->SetTitleFont(42);
   Graph_Graph01096->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01096->GetYaxis()->CenterTitle(true);
   Graph_Graph01096->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01096->GetYaxis()->SetLabelFont(42);
   Graph_Graph01096->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01096->GetYaxis()->SetTitleFont(42);
   Graph_Graph01096->GetZaxis()->SetLabelFont(42);
   Graph_Graph01096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01096);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
