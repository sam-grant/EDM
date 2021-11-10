void S18_g2_delta_prime_vs_p_900-2250MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-2.099997,2499.5,1.424998);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1129[11] = {
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
   Double_t _fy1129[11] = {
   -0.3374998,
   0.0201693,
   -0.5284083,
   -0.1099531,
   -0.2060782,
   0.2111894,
   0.1665426,
   0.3458123,
   0.006237934,
   -0.3794492,
   -0.08217965};
   Double_t _fex1129[11] = {
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
   Double_t _fey1129[11] = {
   0.5127265,
   0.4177698,
   0.3574194,
   0.3283737,
   0.3098202,
   0.3133576,
   0.3145999,
   0.3451501,
   0.3771789,
   0.4411419,
   0.5214706};
   TGraphErrors *gre = new TGraphErrors(11,_fx1129,_fy1129,_fex1129,_fey1129);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1129 = new TH1F("Graph_Graph1129","S18_",100,812,2312);
   Graph_Graph1129->SetMinimum(-1.747498);
   Graph_Graph1129->SetMaximum(1.072498);
   Graph_Graph1129->SetDirectory(0);
   Graph_Graph1129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1129->SetLineColor(ci);
   Graph_Graph1129->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1129->GetXaxis()->CenterTitle(true);
   Graph_Graph1129->GetXaxis()->SetLabelFont(42);
   Graph_Graph1129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1129->GetXaxis()->SetTitleFont(42);
   Graph_Graph1129->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1129->GetYaxis()->CenterTitle(true);
   Graph_Graph1129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1129->GetYaxis()->SetLabelFont(42);
   Graph_Graph1129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1129->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1129->GetYaxis()->SetTitleFont(42);
   Graph_Graph1129->GetZaxis()->SetLabelFont(42);
   Graph_Graph1129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1129);
   
   
   TF1 *pol01130 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01130->SetFillColor(19);
   pol01130->SetFillStyle(0);
   pol01130->SetLineColor(2);
   pol01130->SetLineWidth(2);
   pol01130->SetChisquare(5.488521);
   pol01130->SetNDF(10);
   pol01130->GetXaxis()->SetLabelFont(42);
   pol01130->GetXaxis()->SetTitleOffset(1);
   pol01130->GetXaxis()->SetTitleFont(42);
   pol01130->GetYaxis()->SetLabelFont(42);
   pol01130->GetYaxis()->SetTitleFont(42);
   pol01130->SetParameter(0,-0.04833317);
   pol01130->SetParError(0,0.1107151);
   pol01130->SetParLimits(0,0,0);
   pol01130->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01130);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.048
#pm0.1
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
