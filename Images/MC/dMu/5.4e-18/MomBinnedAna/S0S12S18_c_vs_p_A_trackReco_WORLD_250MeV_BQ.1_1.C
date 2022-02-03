void S0S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7499,-6.695434e-05,3408.061,6.831994e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1208[11] = {
   451.6989,
   653.3673,
   880.3254,
   1123.144,
   1371.143,
   1620.226,
   1867.221,
   2115.543,
   2362.981,
   2614.165,
   2788.507};
   Double_t Graph0_fy1208[11] = {
   1.212699e-05,
   -1.308412e-07,
   -5.76935e-08,
   -7.790376e-08,
   -8.812847e-08,
   -5.094902e-08,
   -9.391816e-08,
   1.080184e-07,
   -2.143861e-08,
   -1.212493e-06,
   -2.008202e-05};
   Double_t Graph0_fex1208[11] = {
   0.1090345,
   0.09195276,
   0.06666504,
   0.06508974,
   0.06952338,
   0.07686814,
   0.08948912,
   0.1108082,
   0.1425331,
   0.1752943,
   0.2141166};
   Double_t Graph0_fey1208[11] = {
   1.064197e-06,
   7.004067e-08,
   2.364519e-08,
   2.146503e-08,
   2.619959e-08,
   3.611161e-08,
   5.961491e-08,
   1.21699e-07,
   2.899945e-07,
   6.618099e-07,
   1.673283e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1208,Graph0_fy1208,Graph0_fex1208,Graph0_fey1208);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01208 = new TH1F("Graph_Graph01208","S0S12S18_",100,217.8768,3022.434);
   Graph_Graph01208->SetMinimum(-5.342691e-05);
   Graph_Graph01208->SetMaximum(5.479251e-05);
   Graph_Graph01208->SetDirectory(0);
   Graph_Graph01208->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01208->SetLineColor(ci);
   Graph_Graph01208->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01208->GetXaxis()->SetRange(0,101);
   Graph_Graph01208->GetXaxis()->CenterTitle(true);
   Graph_Graph01208->GetXaxis()->SetLabelFont(42);
   Graph_Graph01208->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01208->GetXaxis()->SetTitleFont(42);
   Graph_Graph01208->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01208->GetYaxis()->CenterTitle(true);
   Graph_Graph01208->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01208->GetYaxis()->SetLabelFont(42);
   Graph_Graph01208->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01208->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01208->GetYaxis()->SetTitleFont(42);
   Graph_Graph01208->GetZaxis()->SetLabelFont(42);
   Graph_Graph01208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01208->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01208);
   
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
