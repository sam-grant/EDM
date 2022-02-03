void S0S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6095,-4.229527e-05,3407.957,5.199421e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1208[11] = {
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
   Double_t Graph0_fy1208[11] = {
   9.453769e-06,
   -4.703587e-08,
   -4.895054e-08,
   -4.997188e-08,
   -6.955034e-08,
   -4.552935e-08,
   -2.502185e-08,
   -5.052816e-11,
   -1.372599e-07,
   -7.50301e-07,
   -1.236006e-05};
   Double_t Graph0_fex1208[11] = {
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
   Double_t Graph0_fey1208[11] = {
   6.36137e-07,
   4.198904e-08,
   1.414649e-08,
   1.286251e-08,
   1.566883e-08,
   2.162416e-08,
   3.567658e-08,
   7.26636e-08,
   1.733608e-07,
   3.959806e-07,
   1.042222e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1208,Graph0_fy1208,Graph0_fex1208,Graph0_fey1208);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01208 = new TH1F("Graph_Graph01208","S0S12S18_",100,217.9908,3022.357);
   Graph_Graph01208->SetMinimum(-3.286632e-05);
   Graph_Graph01208->SetMaximum(4.256527e-05);
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
