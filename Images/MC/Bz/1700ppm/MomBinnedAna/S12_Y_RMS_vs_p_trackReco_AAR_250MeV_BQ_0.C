void S12_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:39:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.495,11.98676,2742.526,13.39204);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[11] = {
   451.9846,
   653.0519,
   880.3422,
   1123.184,
   1371.087,
   1620.69,
   1867.019,
   2115.054,
   2361.946,
   2614.81,
   2788.78};
   Double_t Graph0_fy1039[11] = {
   13.09027,
   13.04423,
   12.93638,
   12.86517,
   12.80381,
   12.80374,
   12.78113,
   12.66754,
   12.57392,
   12.6931,
   12.3657};
   Double_t Graph0_fex1039[11] = {
   0.240275,
   0.2045413,
   0.1479285,
   0.144788,
   0.1543929,
   0.169926,
   0.1986831,
   0.2486955,
   0.3213767,
   0.3981981,
   0.4964072};
   Double_t Graph0_fey1039[11] = {
   0.06755825,
   0.02731465,
   0.01891701,
   0.01830396,
   0.0194072,
   0.0214475,
   0.0249887,
   0.03103392,
   0.04009236,
   0.05105915,
   0.1447296};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12_",100,217.9911,3023.03);
   Graph_Graph01039->SetMinimum(12.12729);
   Graph_Graph01039->SetMaximum(13.25152);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(19,82);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
