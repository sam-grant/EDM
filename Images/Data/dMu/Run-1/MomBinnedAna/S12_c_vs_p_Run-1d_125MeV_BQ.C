void S12_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:18:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8422,-0.07127767,3033.559,0.5981216);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[22] = {
   367.2264,
   456.6616,
   570.2511,
   695.0728,
   815.9922,
   938.5583,
   1062.66,
   1188.291,
   1312.787,
   1435.903,
   1561.974,
   1685.264,
   1810.607,
   1935.13,
   2060.293,
   2185.026,
   2309.146,
   2432.958,
   2559.535,
   2679.195,
   2781.14,
   2886.432};
   Double_t Graph0_fy1061[22] = {
   1.726596,
   0.02651201,
   0.006680671,
   0.01172184,
   0.00933156,
   0.001498936,
   0.003362592,
   -0.0002536596,
   -0.0004154884,
   0.002581206,
   -0.001814267,
   0.003279479,
   -0.0004983279,
   -0.000606927,
   0.002550167,
   0.00141537,
   0.00577024,
   0.004331593,
   -0.001170872,
   -0.005558837,
   0.01174603,
   0.7825691};
   Double_t Graph0_fex1061[22] = {
   0.1560151,
   0.07824154,
   0.05252292,
   0.03553039,
   0.02848522,
   0.025669,
   0.02434069,
   0.02350631,
   0.02380413,
   0.02386992,
   0.02563485,
   0.0268977,
   0.03016952,
   0.03304359,
   0.03766603,
   0.04149162,
   0.04786816,
   0.05746284,
   0.06891139,
   0.07858218,
   0.1570593,
   0.9491119};
   Double_t Graph0_fey1061[22] = {
   0.897225,
   0.08117952,
   0.03969897,
   0.02369162,
   0.0162681,
   0.01335206,
   0.01174865,
   0.01059498,
   0.009925106,
   0.009368019,
   0.009376921,
   0.009057523,
   0.009379834,
   0.009460135,
   0.009926162,
   0.0100943,
   0.01067155,
   0.01164159,
   0.01265765,
   0.01396085,
   0.03454223,
   0.2506706};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S12",100,115.0394,3139.412);
   Graph_Graph01061->SetMinimum(-0.004337733);
   Graph_Graph01061->SetMaximum(0.5311817);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(21,88);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
