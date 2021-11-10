void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.04088481,2655.75,0.1105878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1087[12] = {
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
   2312};
   Double_t _fy1087[12] = {
   0.02781525,
   0.02270505,
   0.02213992,
   0.0385507,
   0.05986855,
   0.01088197,
   0.03958267,
   0.042458,
   0.05597882,
   0.07630425,
   0.02921177,
   0.05544534};
   Double_t _fex1087[12] = {
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
   Double_t _fey1087[12] = {
   0.01947374,
   0.01714368,
   0.01552092,
   0.01472418,
   0.01401125,
   0.0140468,
   0.01369379,
   0.01434556,
   0.01453543,
   0.01530903,
   0.01558126,
   0.01640437};
   TGraphErrors *gre = new TGraphErrors(12,_fx1087,_fy1087,_fex1087,_fey1087);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","S18_",100,799.5,2449.5);
   Graph_Graph1087->SetMinimum(-0.02573755);
   Graph_Graph1087->SetMaximum(0.09544054);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1087->GetXaxis()->CenterTitle(true);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1087->GetYaxis()->CenterTitle(true);
   Graph_Graph1087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   
   TF1 *pol01088 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01088->SetFillColor(19);
   pol01088->SetFillStyle(0);
   pol01088->SetLineColor(2);
   pol01088->SetLineWidth(2);
   pol01088->SetChisquare(17.25562);
   pol01088->SetNDF(11);
   pol01088->GetXaxis()->SetLabelFont(42);
   pol01088->GetXaxis()->SetTitleOffset(1);
   pol01088->GetXaxis()->SetTitleFont(42);
   pol01088->GetYaxis()->SetLabelFont(42);
   pol01088->GetYaxis()->SetTitleFont(42);
   pol01088->SetParameter(0,0.04067403);
   pol01088->SetParError(0,0.00438563);
   pol01088->SetParLimits(0,0,0);
   pol01088->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01088);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.041
#pm0.004
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
