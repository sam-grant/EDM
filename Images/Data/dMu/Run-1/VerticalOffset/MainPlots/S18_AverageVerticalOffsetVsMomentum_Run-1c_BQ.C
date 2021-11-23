void S18_AverageVerticalOffsetVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:59:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[18] = {
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
   2687};
   Double_t Graph0_fy1055[18] = {
   2.172185,
   -0.3332675,
   -0.1236998,
   0.1814183,
   -0.6014652,
   -0.4886025,
   -0.5593716,
   -0.4556562,
   -0.2768381,
   -0.2032292,
   -0.1666763,
   -0.106996,
   -0.1063727,
   -0.02579283,
   0.009295756,
   -0.08235825,
   -0.00538908,
   0.01566105};
   Double_t Graph0_fex1055[18] = {
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
   Double_t Graph0_fey1055[18] = {
   0.116678,
   0.07172112,
   0.05037425,
   0.04161834,
   0.03660078,
   0.03318454,
   0.0314752,
   0.0300439,
   0.03013566,
   0.02938195,
   0.03074716,
   0.03115568,
   0.032812,
   0.03373025,
   0.03530112,
   0.03824088,
   0.03985423,
   0.04390512};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S18",100,349.5,2899.5);
   Graph_Graph01055->SetMinimum(-1.5);
   Graph_Graph01055->SetMaximum(2.5);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1056[18] = {
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
   2687};
   Double_t Graph0_fy1056[18] = {
   2.172185,
   -0.3332675,
   -0.1236998,
   0.1814183,
   -0.6014652,
   -0.4886025,
   -0.5593716,
   -0.4556562,
   -0.2768381,
   -0.2032292,
   -0.1666763,
   -0.106996,
   -0.1063727,
   -0.02579283,
   0.009295756,
   -0.08235825,
   -0.00538908,
   0.01566105};
   Double_t Graph0_fex1056[18] = {
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
   Double_t Graph0_fey1056[18] = {
   0.116678,
   0.07172112,
   0.05037425,
   0.04161834,
   0.03660078,
   0.03318454,
   0.0314752,
   0.0300439,
   0.03013566,
   0.02938195,
   0.03074716,
   0.03115568,
   0.032812,
   0.03373025,
   0.03530112,
   0.03824088,
   0.03985423,
   0.04390512};
   gre = new TGraphErrors(18,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010551056 = new TH1F("Graph_Graph_Graph010551056","S18",100,349.5,2899.5);
   Graph_Graph_Graph010551056->SetMinimum(-1.5);
   Graph_Graph_Graph010551056->SetMaximum(2.5);
   Graph_Graph_Graph010551056->SetDirectory(0);
   Graph_Graph_Graph010551056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010551056->SetLineColor(ci);
   Graph_Graph_Graph010551056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010551056->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010551056->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010551056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010551056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010551056->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010551056->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010551056->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010551056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010551056->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010551056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010551056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010551056->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010551056->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010551056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010551056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010551056);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
