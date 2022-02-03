void S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7144,-4.289625e-05,3408.481,0.0003843429);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1136[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t Graph0_fy1136[11] = {
   2.520903e-06,
   -2.186852e-07,
   -1.123201e-07,
   6.904414e-08,
   8.280032e-08,
   5.546811e-08,
   2.447015e-07,
   1.299267e-06,
   1.091912e-06,
   7.93282e-06,
   8.796257e-05};
   Double_t Graph0_fex1136[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t Graph0_fey1136[11] = {
   8.510727e-06,
   5.759598e-07,
   1.982128e-07,
   1.834317e-07,
   2.276022e-07,
   3.255203e-07,
   5.519722e-07,
   1.190255e-06,
   2.948997e-06,
   6.398715e-06,
   0.0001867362};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1136,Graph0_fy1136,Graph0_fex1136,Graph0_fey1136);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01136 = new TH1F("Graph_Graph01136","S18_",100,217.9537,3022.812);
   Graph_Graph01136->SetMinimum(-1.723298e-07);
   Graph_Graph01136->SetMaximum(0.000341619);
   Graph_Graph01136->SetDirectory(0);
   Graph_Graph01136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01136->SetLineColor(ci);
   Graph_Graph01136->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01136->GetXaxis()->SetRange(0,101);
   Graph_Graph01136->GetXaxis()->CenterTitle(true);
   Graph_Graph01136->GetXaxis()->SetLabelFont(42);
   Graph_Graph01136->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01136->GetXaxis()->SetTitleFont(42);
   Graph_Graph01136->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01136->GetYaxis()->CenterTitle(true);
   Graph_Graph01136->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01136->GetYaxis()->SetLabelFont(42);
   Graph_Graph01136->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01136->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01136->GetYaxis()->SetTitleFont(42);
   Graph_Graph01136->GetZaxis()->SetLabelFont(42);
   Graph_Graph01136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01136);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
