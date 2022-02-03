void S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7144,-6.253769e-05,3408.481,1.899782e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1135[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t Graph0_fy1135[11] = {
   -1.777308e-05,
   5.231609e-07,
   3.895e-07,
   2.375814e-07,
   2.625836e-07,
   1.564606e-06,
   1.367127e-06,
   1.010464e-06,
   -9.089011e-08,
   9.153372e-06,
   1.875291e-06};
   Double_t Graph0_fex1135[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t Graph0_fey1135[11] = {
   8.196756e-06,
   5.649013e-07,
   1.963449e-07,
   1.817253e-07,
   2.27949e-07,
   3.173315e-07,
   5.240992e-07,
   1.043754e-06,
   2.32808e-06,
   4.327835e-06,
   0.0001083762};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1135,Graph0_fy1135,Graph0_fex1135,Graph0_fey1135);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01135 = new TH1F("Graph_Graph01135","S18_",100,217.9537,3022.812);
   Graph_Graph01135->SetMinimum(-5.438413e-05);
   Graph_Graph01135->SetMaximum(1.084427e-05);
   Graph_Graph01135->SetDirectory(0);
   Graph_Graph01135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01135->SetLineColor(ci);
   Graph_Graph01135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01135->GetXaxis()->SetRange(0,101);
   Graph_Graph01135->GetXaxis()->CenterTitle(true);
   Graph_Graph01135->GetXaxis()->SetLabelFont(42);
   Graph_Graph01135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01135->GetXaxis()->SetTitleFont(42);
   Graph_Graph01135->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01135->GetYaxis()->CenterTitle(true);
   Graph_Graph01135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01135->GetYaxis()->SetLabelFont(42);
   Graph_Graph01135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01135->GetYaxis()->SetTitleFont(42);
   Graph_Graph01135->GetZaxis()->SetLabelFont(42);
   Graph_Graph01135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01135);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
