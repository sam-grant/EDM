void S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.1579408,2499.5,0.07891033);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1183[11] = {
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
   2187};
   Double_t _fy1183[11] = {
   -0.04874015,
   0.007438034,
   -0.01012589,
   0.02393875,
   0.02724898,
   0.01467536,
   -0.01322302,
   -0.03139649,
   -0.03987788,
   -0.008400007,
   -0.0002730862};
   Double_t _fex1183[11] = {
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
   Double_t _fey1183[11] = {
   0.03109656,
   0.02736926,
   0.02481281,
   0.02351051,
   0.02238099,
   0.02248709,
   0.02190235,
   0.02296244,
   0.02328545,
   0.0244794,
   0.02501238};
   TGraphErrors *gre = new TGraphErrors(11,_fx1183,_fy1183,_fex1183,_fey1183);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1183 = new TH1F("Graph_Graph1183","S18_",100,812,2312);
   Graph_Graph1183->SetMinimum(-0.1342557);
   Graph_Graph1183->SetMaximum(0.05522521);
   Graph_Graph1183->SetDirectory(0);
   Graph_Graph1183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1183->SetLineColor(ci);
   Graph_Graph1183->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1183->GetXaxis()->CenterTitle(true);
   Graph_Graph1183->GetXaxis()->SetLabelFont(42);
   Graph_Graph1183->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1183->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1183->GetXaxis()->SetTitleFont(42);
   Graph_Graph1183->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1183->GetYaxis()->CenterTitle(true);
   Graph_Graph1183->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1183->GetYaxis()->SetLabelFont(42);
   Graph_Graph1183->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1183->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1183->GetYaxis()->SetTitleFont(42);
   Graph_Graph1183->GetZaxis()->SetLabelFont(42);
   Graph_Graph1183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1183);
   
   
   TF1 *pol01184 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01184->SetFillColor(19);
   pol01184->SetFillStyle(0);
   pol01184->SetLineColor(2);
   pol01184->SetLineWidth(2);
   pol01184->SetChisquare(10.33915);
   pol01184->SetNDF(10);
   pol01184->GetXaxis()->SetLabelFont(42);
   pol01184->GetXaxis()->SetTitleOffset(1);
   pol01184->GetXaxis()->SetTitleFont(42);
   pol01184->GetYaxis()->SetLabelFont(42);
   pol01184->GetYaxis()->SetTitleFont(42);
   pol01184->SetParameter(0,-0.005580641);
   pol01184->SetParError(0,0.00727989);
   pol01184->SetParLimits(0,0,0);
   pol01184->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01184);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0056
#pm0.007
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
