void S0_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.5093,-0.003580428,2742.058,0.01096321);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[11] = {
   452.008,
   653.2053,
   880.0813,
   1123.171,
   1371.212,
   1620.822,
   1867.497,
   2116.578,
   2363.445,
   2614.991,
   2788.382};
   Double_t Graph0_fy1034[11] = {
   -0.0009149278,
   9.705336e-05,
   -0.0004926198,
   -0.0001018753,
   0.001055032,
   -0.000295102,
   -0.0008297343,
   0.000713076,
   0.002313466,
   0.0001908942,
   0.004439103};
   Double_t Graph0_fex1034[11] = {
   0.2393631,
   0.2026096,
   0.1476681,
   0.1448015,
   0.1538361,
   0.1689038,
   0.194666,
   0.2363555,
   0.2952579,
   0.3714583,
   0.4169272};
   Double_t Graph0_fey1034[11] = {
   -0.001872488,
   0.0006880042,
   -0.00048367,
   -0.0004775548,
   0.0005317636,
   -0.0005592784,
   -0.0006384532,
   0.0008350335,
   0.00103303,
   0.001347383,
   0.004100168};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S0_",100,218.0657,3022.502);
   Graph_Graph01034->SetMinimum(-0.002126064);
   Graph_Graph01034->SetMaximum(0.009508847);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(19,82);
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
