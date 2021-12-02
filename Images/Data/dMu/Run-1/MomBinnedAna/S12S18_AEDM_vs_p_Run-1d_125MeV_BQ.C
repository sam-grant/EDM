void S12S18_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8818,0.02038932,2726.488,0.05952641);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
   367.2469,
   457.0411,
   570.0979,
   694.793,
   815.855,
   938.5231,
   1062.733,
   1188.225,
   1312.686,
   1435.772,
   1561.976,
   1685.085,
   1810.538,
   1935.02,
   2060.267,
   2184.91,
   2309.095,
   2433.064,
   2559.663,
   2678.606,
   2781.211,
   2885.765};
   Double_t Graph0_fy1040[22] = {
   0.496185,
   -0.03778096,
   0.1035829,
   0.04325779,
   0.02691559,
   0.02951318,
   0.03646284,
   0.02916136,
   0.05099571,
   0.0436124,
   0.03484275,
   0.04476453,
   0.0424745,
   0.04711601,
   0.04877731,
   0.04315392,
   0.04691074,
   0.03237138,
   0.03136445,
   0.03550371,
   0.02756225,
   -0.0979455};
   Double_t Graph0_fex1040[22] = {
   0.1105557,
   0.05531676,
   0.03686654,
   0.02538836,
   0.02047653,
   0.0185069,
   0.01754794,
   0.01698776,
   0.01729284,
   0.01738604,
   0.01871592,
   0.01974609,
   0.02231054,
   0.02444932,
   0.0279945,
   0.03093733,
   0.03584407,
   0.0432536,
   0.05150499,
   0.05901302,
   0.1212649,
   0.7002053};
   Double_t Graph0_fey1040[22] = {
   0.8779669,
   0.080674,
   0.03923395,
   0.02378757,
   0.01650005,
   0.01358562,
   0.01196682,
   0.01081723,
   0.01019568,
   0.009659846,
   0.009674816,
   0.009377749,
   0.00974582,
   0.009835156,
   0.01030429,
   0.01045057,
   0.01095781,
   0.01182834,
   0.01250249,
   0.01347793,
   0.03352255,
   0.3638615};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,115.2034,3138.398);
   Graph_Graph01040->SetMinimum(0.02430303);
   Graph_Graph01040->SetMaximum(0.0556127);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(21,79);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
