void S12S18_Momentum_Y_RMS_vs_p_Run-1a_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.113,11.03641,2711.125,25.87972);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[11] = {
   456.0372,
   655.0714,
   884.0294,
   1127.741,
   1373.414,
   1620.078,
   1867.044,
   2116.141,
   2359.798,
   2607.74,
   2789.077};
   Double_t Graph0_fy1111[11] = {
   14.30046,
   15.90204,
   17.15242,
   18.73497,
   19.91886,
   20.32962,
   19.865,
   18.98409,
   17.47912,
   15.51004,
   15.12748};
   Double_t Graph0_fex1111[11] = {
   0.09287199,
   0.06456789,
   0.04300393,
   0.0389422,
   0.03819327,
   0.04210601,
   0.05104288,
   0.06407958,
   0.0835768,
   0.1155309,
   0.2148337};
   Double_t Graph0_fey1111[11] = {
   0.02972986,
   0.01068028,
   0.007368282,
   0.007137407,
   0.007540684,
   0.00849187,
   0.0100004,
   0.01199227,
   0.0146005,
   0.0185748,
   0.06999862};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S12S18",100,222.6095,3022.627);
   Graph_Graph01111->SetMinimum(12.52074);
   Graph_Graph01111->SetMaximum(24.39539);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01111->GetXaxis()->SetRange(28,82);
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
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
