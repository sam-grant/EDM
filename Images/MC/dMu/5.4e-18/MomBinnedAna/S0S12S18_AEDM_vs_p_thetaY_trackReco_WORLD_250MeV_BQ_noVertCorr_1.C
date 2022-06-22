void S0S12S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun  7 21:48:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8644,-0.06870739,3375.839,0.2038138);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1206[11] = {
   451.8482,
   653.332,
   880.3222,
   1123.094,
   1371.099,
   1620.134,
   1866.992,
   2115.379,
   2362.982,
   2613.714,
   2788.104};
   Double_t Graph0_fy1206[11] = {
   0.05829478,
   0.1254456,
   0.1232933,
   0.126515,
   0.1454072,
   0.147152,
   0.1299951,
   0.106144,
   0.08816024,
   0.09202504,
   0.02249807};
   Double_t Graph0_fex1206[11] = {
   0.06111782,
   0.05160074,
   0.03736694,
   0.03649742,
   0.03897795,
   0.04310138,
   0.05036302,
   0.06271814,
   0.08133228,
   0.09940153,
   0.121472};
   Double_t Graph0_fey1206[11] = {
   0.08158198,
   0.0272973,
   0.0156744,
   0.01287479,
   0.01180637,
   0.01124158,
   0.01130182,
   0.0118975,
   0.01272844,
   0.01260045,
   0.02887448};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1206,Graph0_fy1206,Graph0_fex1206,Graph0_fey1206);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01206 = new TH1F("Graph_Graph01206","S0S12S18_",100,218.1433,3021.869);
   Graph_Graph01206->SetMinimum(-0.04145527);
   Graph_Graph01206->SetMaximum(0.1765616);
   Graph_Graph01206->SetDirectory(0);
   Graph_Graph01206->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01206->SetLineColor(ci);
   Graph_Graph01206->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01206->GetXaxis()->SetRange(0,100);
   Graph_Graph01206->GetXaxis()->CenterTitle(true);
   Graph_Graph01206->GetXaxis()->SetLabelFont(42);
   Graph_Graph01206->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01206->GetXaxis()->SetTitleFont(42);
   Graph_Graph01206->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01206->GetYaxis()->CenterTitle(true);
   Graph_Graph01206->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01206->GetYaxis()->SetLabelFont(42);
   Graph_Graph01206->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01206->GetYaxis()->SetTitleFont(42);
   Graph_Graph01206->GetZaxis()->SetLabelFont(42);
   Graph_Graph01206->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01206->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01206);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
