void S0_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:36:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.8585,-0.004133146,3030.853,0.004727874);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[11] = {
   451.7781,
   653.2851,
   879.913,
   1123.018,
   1371.498,
   1620.743,
   1868.042,
   2116.557,
   2363.191,
   2615.094,
   2792.91};
   Double_t Graph0_fy1048[11] = {
   0.001249392,
   0.001084162,
   0.001323753,
   0.001886687,
   0.002564581,
   0.003203382,
   0.002293099,
   0.002698169,
   0.002262603,
   0.002847925,
   -0.002612697};
   Double_t Graph0_fex1048[11] = {
   0.1396116,
   0.1181044,
   0.08604211,
   0.08418436,
   0.08952223,
   0.09880081,
   0.1134327,
   0.1371282,
   0.1717633,
   0.2154117,
   0.2761485};
   Double_t Graph0_fey1048[11] = {
   0.00110065,
   0.00040563,
   0.0003035623,
   0.0003023106,
   0.0003204402,
   0.0003594878,
   0.0004130208,
   0.0004991406,
   0.0006209582,
   0.0007686594,
   -0.002255066};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S0_",100,217.4837,3027.341);
   Graph_Graph01048->SetMinimum(-0.003247044);
   Graph_Graph01048->SetMaximum(0.003841772);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(19,91);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
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
