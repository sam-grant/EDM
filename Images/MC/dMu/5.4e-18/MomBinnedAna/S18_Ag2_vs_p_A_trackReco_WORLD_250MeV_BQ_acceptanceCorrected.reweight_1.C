void S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0465,-2.614586e-05,3406.654,3.873999e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1136[11] = {
   452.0383,
   653.2767,
   880.5616,
   1123.015,
   1370.8,
   1619.721,
   1866.492,
   2115.018,
   2363.349,
   2612.121,
   2787.449};
   Double_t Graph0_fy1136[11] = {
   2.83491e-08,
   2.564166e-08,
   -6.984991e-08,
   3.999225e-09,
   4.627205e-08,
   7.194777e-09,
   -8.82052e-09,
   -1.259269e-07,
   7.338934e-07,
   4.640045e-07,
   -8.013953e-06};
   Double_t Graph0_fex1136[11] = {
   0.1105323,
   0.09332027,
   0.06724064,
   0.0656172,
   0.07044104,
   0.07801539,
   0.09201272,
   0.1155807,
   0.1519345,
   0.1816586,
   0.2304013};
   Double_t Graph0_fey1136[11] = {
   2.260225e-06,
   1.231972e-07,
   3.64889e-08,
   3.152379e-08,
   3.976502e-08,
   5.35473e-08,
   9.048803e-08,
   1.891668e-07,
   4.618521e-07,
   9.888052e-07,
   2.999197e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1136,Graph0_fy1136,Graph0_fex1136,Graph0_fey1136);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01136 = new TH1F("Graph_Graph01136","S18_",100,218.3526,3021.255);
   Graph_Graph01136->SetMinimum(-2.314388e-05);
   Graph_Graph01136->SetMaximum(8.720129e-07);
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
