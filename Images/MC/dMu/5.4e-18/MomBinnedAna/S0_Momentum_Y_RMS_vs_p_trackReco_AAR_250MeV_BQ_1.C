void S0_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2748,11.79846,2743.039,23.49898);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[11] = {
   451.6483,
   653.2696,
   879.9299,
   1123.053,
   1371.408,
   1620.742,
   1868.003,
   2116.568,
   2363.181,
   2615.29,
   2789.556};
   Double_t Graph0_fy1030[11] = {
   14.15541,
   16.78754,
   18.69865,
   20.1825,
   21.15943,
   21.52798,
   21.24492,
   20.38643,
   18.72932,
   16.25681,
   13.82872};
   Double_t Graph0_fex1030[11] = {
   0.1394032,
   0.1178799,
   0.08603429,
   0.08412167,
   0.08954582,
   0.09885964,
   0.1134626,
   0.1373988,
   0.1719485,
   0.215346,
   0.2483098};
   Double_t Graph0_fey1030[11] = {
   0.04246911,
   0.02033275,
   0.01588954,
   0.01669269,
   0.018622,
   0.02090975,
   0.02371806,
   0.02758982,
   0.03192143,
   0.03518641,
   0.08017491};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S0_",100,217.6794,3023.634);
   Graph_Graph01030->SetMinimum(12.96851);
   Graph_Graph01030->SetMaximum(22.32893);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01030->GetXaxis()->SetRange(19,82);
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
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
