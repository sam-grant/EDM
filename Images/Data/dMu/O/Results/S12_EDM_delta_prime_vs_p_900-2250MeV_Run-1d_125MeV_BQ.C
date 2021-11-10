void S12_EDM_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-1.714369,2499.5,1.260695);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1133[11] = {
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
   Double_t _fy1133[11] = {
   -0.278978,
   -0.7699507,
   0.006055831,
   -0.5787094,
   -0.3132174,
   -0.1503754,
   -0.1287483,
   -0.4236465,
   -0.08257149,
   -0.4059683,
   0.4744456};
   Double_t _fex1133[11] = {
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
   Double_t _fey1133[11] = {
   0.4137761,
   0.3370818,
   0.2884827,
   0.2621979,
   0.2444855,
   0.246964,
   0.2450873,
   0.2667127,
   0.2879199,
   0.334832,
   0.3909945};
   TGraphErrors *gre = new TGraphErrors(11,_fx1133,_fy1133,_fex1133,_fey1133);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1133 = new TH1F("Graph_Graph1133","S12_",100,812,2312);
   Graph_Graph1133->SetMinimum(-1.416862);
   Graph_Graph1133->SetMaximum(0.9631888);
   Graph_Graph1133->SetDirectory(0);
   Graph_Graph1133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1133->SetLineColor(ci);
   Graph_Graph1133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1133->GetXaxis()->CenterTitle(true);
   Graph_Graph1133->GetXaxis()->SetLabelFont(42);
   Graph_Graph1133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1133->GetXaxis()->SetTitleFont(42);
   Graph_Graph1133->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1133->GetYaxis()->CenterTitle(true);
   Graph_Graph1133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1133->GetYaxis()->SetLabelFont(42);
   Graph_Graph1133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1133->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1133->GetYaxis()->SetTitleFont(42);
   Graph_Graph1133->GetZaxis()->SetLabelFont(42);
   Graph_Graph1133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1133);
   
   
   TF1 *pol01134 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01134->SetFillColor(19);
   pol01134->SetFillStyle(0);
   pol01134->SetLineColor(2);
   pol01134->SetLineWidth(2);
   pol01134->SetChisquare(9.623559);
   pol01134->SetNDF(10);
   pol01134->GetXaxis()->SetLabelFont(42);
   pol01134->GetXaxis()->SetTitleOffset(1);
   pol01134->GetXaxis()->SetTitleFont(42);
   pol01134->GetYaxis()->SetLabelFont(42);
   pol01134->GetYaxis()->SetTitleFont(42);
   pol01134->SetParameter(0,-0.2570107);
   pol01134->SetParError(0,0.0868552);
   pol01134->SetParLimits(0,0,0);
   pol01134->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01134);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.26
#pm0.09
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
