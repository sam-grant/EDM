void S12_thetaYMaxDiff_vs_p_trackRecoControl_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:31:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.337,-11.94099,2744.492,311.7495);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[11] = {
   452.8467,
   656.3467,
   884.5547,
   1123.532,
   1363.534,
   1601.532,
   1825.246,
   2100.364,
   2414.133,
   2638.074,
   2790.765};
   Double_t Graph0_fy1043[11] = {
   253.0133,
   246.5808,
   182.2554,
   175.8228,
   143.6601,
   113.6416,
   66.4696,
   49.31616,
   42.88361,
   34.30689,
   25.73017};
   Double_t Graph0_fex1043[11] = {
   0.2837759,
   0.2116908,
   0.1417707,
   0.1304273,
   0.14985,
   0.2133281,
   0.4402353,
   2.489685,
   1.044304,
   0.569552,
   0.5003926};
   Double_t Graph0_fey1043[11] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12_",100,218.6927,3025.136);
   Graph_Graph01043->SetMinimum(20.42806);
   Graph_Graph01043->SetMaximum(279.3804);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(19,82);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
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
