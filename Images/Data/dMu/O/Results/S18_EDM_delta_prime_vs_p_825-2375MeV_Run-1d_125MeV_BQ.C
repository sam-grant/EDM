void S18_EDM_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-2.522548,2655.75,0.9840559);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1135[12] = {
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
   Double_t _fy1135[12] = {
   -0.6660936,
   0.0939154,
   -0.1212022,
   0.2776866,
   0.3125272,
   0.169676,
   -0.1572078,
   -0.3921963,
   -0.5366118,
   -0.1255693,
   -0.004725267,
   -1.471641};
   Double_t _fex1135[12] = {
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
   Double_t _fey1135[12] = {
   0.4249724,
   0.3455745,
   0.2969978,
   0.2727191,
   0.2566946,
   0.259995,
   0.2603958,
   0.2868404,
   0.3133378,
   0.3659355,
   0.4327945,
   0.5601977};
   TGraphErrors *gre = new TGraphErrors(12,_fx1135,_fy1135,_fex1135,_fey1135);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1135 = new TH1F("Graph_Graph1135","S18_",100,799.5,2449.5);
   Graph_Graph1135->SetMinimum(-2.171888);
   Graph_Graph1135->SetMaximum(0.6333955);
   Graph_Graph1135->SetDirectory(0);
   Graph_Graph1135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1135->SetLineColor(ci);
   Graph_Graph1135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1135->GetXaxis()->CenterTitle(true);
   Graph_Graph1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph1135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph1135->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1135->GetYaxis()->CenterTitle(true);
   Graph_Graph1135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph1135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph1135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1135);
   
   
   TF1 *pol01136 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01136->SetFillColor(19);
   pol01136->SetFillStyle(0);
   pol01136->SetLineColor(2);
   pol01136->SetLineWidth(2);
   pol01136->SetChisquare(16.74309);
   pol01136->SetNDF(11);
   pol01136->GetXaxis()->SetLabelFont(42);
   pol01136->GetXaxis()->SetTitleOffset(1);
   pol01136->GetXaxis()->SetTitleFont(42);
   pol01136->GetYaxis()->SetLabelFont(42);
   pol01136->GetYaxis()->SetTitleFont(42);
   pol01136->SetParameter(0,-0.09439836);
   pol01136->SetParError(0,0.09063128);
   pol01136->SetParLimits(0,0,0);
   pol01136->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01136);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.094
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
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
