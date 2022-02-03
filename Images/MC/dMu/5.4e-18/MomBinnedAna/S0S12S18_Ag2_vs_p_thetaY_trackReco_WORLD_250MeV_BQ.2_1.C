void S0S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6095,-0.23331,3407.957,1.423359);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1207[11] = {
   451.7799,
   653.2749,
   880.2439,
   1123.04,
   1371.162,
   1620.21,
   1867.078,
   2115.584,
   2363.023,
   2614.059,
   2788.48};
   Double_t Graph0_fy1207[11] = {
   0.2632204,
   -0.02338778,
   -0.05038554,
   -0.03904551,
   0.01149605,
   0.01606364,
   0.005210556,
   -0.01711059,
   0.008995983,
   0.02207294,
   -0.00861965};
   Double_t Graph0_fex1207[11] = {
   0.09191709,
   0.07752512,
   0.05616783,
   0.05486794,
   0.05858757,
   0.06479554,
   0.07538216,
   0.09335624,
   0.1199966,
   0.1475783,
   0.1798422};
   Double_t Graph0_fey1207[11] = {
   0.122836,
   0.04120975,
   0.02359567,
   0.01938429,
   0.01778146,
   0.01699261,
   0.01708712,
   0.01809377,
   0.01974218,
   0.02052981,
   0.048813};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1207,Graph0_fy1207,Graph0_fex1207,Graph0_fey1207);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01207 = new TH1F("Graph_Graph01207","S0S12S18_",100,217.9908,3022.357);
   Graph_Graph01207->SetMinimum(-0.06764308);
   Graph_Graph01207->SetMaximum(1.257692);
   Graph_Graph01207->SetDirectory(0);
   Graph_Graph01207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01207->SetLineColor(ci);
   Graph_Graph01207->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01207->GetXaxis()->SetRange(0,101);
   Graph_Graph01207->GetXaxis()->CenterTitle(true);
   Graph_Graph01207->GetXaxis()->SetLabelFont(42);
   Graph_Graph01207->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01207->GetXaxis()->SetTitleFont(42);
   Graph_Graph01207->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01207->GetYaxis()->CenterTitle(true);
   Graph_Graph01207->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01207->GetYaxis()->SetLabelFont(42);
   Graph_Graph01207->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01207->GetYaxis()->SetTitleFont(42);
   Graph_Graph01207->GetZaxis()->SetLabelFont(42);
   Graph_Graph01207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01207);
   
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
