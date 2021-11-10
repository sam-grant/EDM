void S12_EDM_delta_prime_vs_p_750-2500MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-2.545167,2843.25,4.634507);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[14] = {
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
   2437};
   Double_t _fy1013[14] = {
   1.318535,
   -0.9616542,
   0.2687663,
   1.09131,
   0.06535691,
   -0.5841989,
   -0.4822045,
   0.09499413,
   0.726514,
   0.225596,
   -0.2865486,
   0.2717685,
   -0.2336749,
   0.08747577};
   Double_t _fex1013[14] = {
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
   Double_t _fey1013[14] = {
   0.944729,
   0.6924365,
   0.5635999,
   0.4805809,
   0.4361376,
   0.4083697,
   0.411361,
   0.4076286,
   0.4419032,
   0.4777774,
   0.5522771,
   0.6490646,
   0.8296183,
   1.212873};
   TGraphErrors *gre = new TGraphErrors(14,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","S12_",100,649.5,2599.5);
   Graph_Graph1013->SetMinimum(-1.8272);
   Graph_Graph1013->SetMaximum(3.91654);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *pol01014 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01014->SetFillColor(19);
   pol01014->SetFillStyle(0);
   pol01014->SetLineColor(2);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(15.93957);
   pol01014->SetNDF(13);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,0.07311059);
   pol01014->SetParError(0,0.1398197);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.073
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
