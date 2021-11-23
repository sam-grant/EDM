void S18_theta_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9393,-4.308562,2726.713,45.84851);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[22] = {
   367.4384,
   456.6742,
   569.9843,
   694.4365,
   815.6608,
   938.5888,
   1062.745,
   1187.919,
   1312.68,
   1435.613,
   1562.048,
   1684.958,
   1810.533,
   1934.893,
   2060.323,
   2184.82,
   2308.919,
   2433.329,
   2560.044,
   2678.053,
   2781.14,
   2885.139};
   Double_t Graph0_fy1030[22] = {
   36.43372,
   31.22518,
   26.67549,
   23.36104,
   20.37337,
   18.72157,
   17.27358,
   16.08938,
   15.03108,
   14.03764,
   13.10051,
   11.98917,
   11.08164,
   10.1858,
   9.395943,
   8.601105,
   7.75322,
   6.902587,
   6.158345,
   5.434653,
   4.964617,
   4.718205};
   Double_t Graph0_fex1030[22] = {
   0.2542597,
   0.1282116,
   0.08547603,
   0.05911733,
   0.04831604,
   0.04372754,
   0.04164599,
   0.04029718,
   0.04118659,
   0.04161464,
   0.04467129,
   0.04750509,
   0.05365686,
   0.05907108,
   0.06800638,
   0.07506477,
   0.08707378,
   0.1057475,
   0.124273,
   0.1422437,
   0.2927081,
   1.562872};
   Double_t Graph0_fey1030[22] = {
   1.055274,
   0.09283921,
   0.04535769,
   0.02764572,
   0.01939985,
   0.0160328,
   0.01413447,
   0.01278426,
   0.01207796,
   0.01151852,
   0.01147411,
   0.01119732,
   0.01166222,
   0.01185841,
   0.01249536,
   0.01268418,
   0.01327742,
   0.01433436,
   0.01499362,
   0.01620099,
   0.0409002,
   0.6672549};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S18",100,115.2323,3138.654);
   Graph_Graph01030->SetMinimum(0.7071455);
   Graph_Graph01030->SetMaximum(40.8328);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01030->GetXaxis()->SetRange(21,79);
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
