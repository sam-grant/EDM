void S12_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:16:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.209417,11.96196,3235.619,14.50504);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[11] = {
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
   Double_t Graph0_fy1056[11] = {
   13.99541,
   13.36838,
   13.21142,
   13.14008,
   13.10634,
   13.12264,
   13.08552,
   12.65908,
   12.63715,
   12.88596,
   12.89698};
   Double_t Graph0_fex1056[11] = {
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
   Double_t Graph0_fey1056[11] = {
   0.08578237,
   0.02951702,
   0.01863283,
   0.01688792,
   0.01953284,
   0.02883366,
   0.0678143,
   0.273267,
   0.1437525,
   0.07573951,
   0.1450473};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S12_",100,218.6927,3025.136);
   Graph_Graph01056->SetMinimum(12.21627);
   Graph_Graph01056->SetMaximum(14.25074);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01056->GetXaxis()->SetRange(5,96);
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
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
