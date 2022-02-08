void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 12:40:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.866,9.355804,3408.39,16.27744);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1212[11] = {
   451.6584,
   653.2684,
   880.1303,
   1123.233,
   1371.135,
   1620.23,
   1867.217,
   2115.292,
   2363.168,
   2614.457,
   2788.76};
   Double_t Graph0_fy1212[11] = {
   12.98681,
   12.98774,
   12.91421,
   12.87048,
   12.77464,
   12.74194,
   12.70832,
   12.67734,
   12.64151,
   12.55925,
   12.58161};
   Double_t Graph0_fex1212[11] = {
   0.1075792,
   0.09102091,
   0.06612771,
   0.06469393,
   0.06911998,
   0.07656499,
   0.0888826,
   0.1102561,
   0.1423127,
   0.1745667,
   0.2131843};
   Double_t Graph0_fey1212[11] = {
   0.02994962,
   0.01213905,
   0.008439664,
   0.008173657,
   0.008674571,
   0.009596869,
   0.01113212,
   0.01378048,
   0.01777004,
   0.02218007,
   0.06296475};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1212,Graph0_fy1212,Graph0_fex1212,Graph0_fey1212);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01212 = new TH1F("Graph_Graph01212","S0S12S18_",100,217.8086,3022.715);
   Graph_Graph01212->SetMinimum(10.04797);
   Graph_Graph01212->SetMaximum(15.58527);
   Graph_Graph01212->SetDirectory(0);
   Graph_Graph01212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01212->SetLineColor(ci);
   Graph_Graph01212->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01212->GetXaxis()->SetRange(0,101);
   Graph_Graph01212->GetXaxis()->CenterTitle(true);
   Graph_Graph01212->GetXaxis()->SetLabelFont(42);
   Graph_Graph01212->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01212->GetXaxis()->SetTitleFont(42);
   Graph_Graph01212->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01212->GetYaxis()->CenterTitle(true);
   Graph_Graph01212->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01212->GetYaxis()->SetLabelFont(42);
   Graph_Graph01212->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01212->GetYaxis()->SetTitleFont(42);
   Graph_Graph01212->GetZaxis()->SetLabelFont(42);
   Graph_Graph01212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01212);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
