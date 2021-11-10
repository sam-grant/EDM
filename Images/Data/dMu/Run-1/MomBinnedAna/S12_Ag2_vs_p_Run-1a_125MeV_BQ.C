void S12_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:21:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-6.812594,2727,2.606568);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1019[22] = {
   -1.427109,
   0.3499952,
   0.06119308,
   0.05104554,
   -0.006299062,
   0.03381131,
   -0.004948279,
   -0.002567786,
   0.03216845,
   0.007235665,
   0.02724432,
   -0.03320505,
   -0.05195389,
   -0.01379185,
   0.001299377,
   -0.02527181,
   -0.02641125,
   -0.03481659,
   0.03912306,
   -0.003074573,
   -0.02761353,
   -2.531363};
   Double_t Graph0_fex1019[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1019[22] = {
   2.463817,
   0.2327692,
   0.1120807,
   0.06641278,
   0.0455604,
   0.03727201,
   0.03272909,
   0.02947037,
   0.02751798,
   0.02601616,
   0.02596023,
   0.02501775,
   0.0258165,
   0.02606346,
   0.02731647,
   0.02771823,
   0.02932847,
   0.0320793,
   0.03446957,
   0.03838372,
   0.09955939,
   2.71137};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,49.5,3199.5);
   Graph_Graph01019->SetMinimum(-5.870678);
   Graph_Graph01019->SetMaximum(1.664652);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(23,78);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
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
