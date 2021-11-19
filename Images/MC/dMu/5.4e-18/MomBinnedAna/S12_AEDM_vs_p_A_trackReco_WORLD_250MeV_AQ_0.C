void S12_AEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:35:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.2053,-0.0004676291,3335.002,0.001040791);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[12] = {
   176.9499,
   432.0898,
   628.443,
   872.9939,
   1121.66,
   1371.549,
   1620.298,
   1868.258,
   2116.438,
   2363.083,
   2614.356,
   2826.288};
   Double_t Graph0_fy1054[12] = {
   0.0002865809,
   1.496228e-06,
   2.409682e-07,
   4.016009e-08,
   4.593928e-08,
   -1.138798e-07,
   -1.18159e-07,
   -6.712115e-07,
   -6.992958e-07,
   -1.871161e-06,
   -4.871403e-06,
   -4.07067e-05};
   Double_t Graph0_fex1054[12] = {
   0.7206046,
   0.0703677,
   0.06339667,
   0.06384642,
   0.06844611,
   0.07394814,
   0.08138022,
   0.09307723,
   0.1109457,
   0.1412249,
   0.1860587,
   0.225681};
   Double_t Graph0_fey1054[12] = {
   0.0005028066,
   3.905348e-07,
   8.787796e-08,
   8.661146e-08,
   1.05686e-07,
   1.332034e-07,
   1.808653e-07,
   2.794913e-07,
   5.057745e-07,
   1.145699e-06,
   2.877312e-06,
   1.419487e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S12_",100,0,3091.543);
   Graph_Graph01054->SetMinimum(-0.0003167871);
   Graph_Graph01054->SetMaximum(0.0008899488);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01054->GetXaxis()->SetRange(2,96);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM}");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
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
