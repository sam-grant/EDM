void S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-2.337703,2499.5,2.473641);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1111[11] = {
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
   Double_t _fy1111[11] = {
   0.06796867,
   -0.08827402,
   0.2103958,
   -0.2722055,
   0.6197503,
   -0.2531557,
   -0.09478623,
   -0.09507457,
   -0.2867503,
   -0.2382673,
   -0.293406};
   Double_t _fex1111[11] = {
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
   Double_t _fey1111[11] = {
   0.6998318,
   0.570656,
   0.4893761,
   0.4468968,
   0.4221227,
   0.4240005,
   0.4259689,
   0.4652958,
   0.509087,
   0.5972906,
   0.7025881};
   TGraphErrors *gre = new TGraphErrors(11,_fx1111,_fy1111,_fex1111,_fey1111);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1111 = new TH1F("Graph_Graph1111","S18_",100,812,2312);
   Graph_Graph1111->SetMinimum(-1.856569);
   Graph_Graph1111->SetMaximum(1.992506);
   Graph_Graph1111->SetDirectory(0);
   Graph_Graph1111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1111->SetLineColor(ci);
   Graph_Graph1111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1111->GetXaxis()->CenterTitle(true);
   Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph1111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph1111->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1111->GetYaxis()->CenterTitle(true);
   Graph_Graph1111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph1111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1111->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph1111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1111);
   
   
   TF1 *pol01112 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01112->SetFillColor(19);
   pol01112->SetFillStyle(0);
   pol01112->SetLineColor(2);
   pol01112->SetLineWidth(2);
   pol01112->SetChisquare(3.763736);
   pol01112->SetNDF(10);
   pol01112->GetXaxis()->SetLabelFont(42);
   pol01112->GetXaxis()->SetTitleOffset(1);
   pol01112->GetXaxis()->SetTitleFont(42);
   pol01112->GetYaxis()->SetLabelFont(42);
   pol01112->GetYaxis()->SetTitleFont(42);
   pol01112->SetParameter(0,-0.042383);
   pol01112->SetParError(0,0.150266);
   pol01112->SetParLimits(0,0,0);
   pol01112->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01112);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.042
#pm0.2
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
