void S12_g2_delta_prime_vs_p_750-2500MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:06:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.162913,2843.25,0.1503148);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1055[14] = {
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
   Double_t _fy1055[14] = {
   -0.006299062,
   0.03381131,
   -0.004948279,
   -0.002567786,
   0.03216845,
   0.007235665,
   0.02724432,
   -0.03320505,
   -0.05195389,
   -0.01379185,
   0.001299377,
   -0.02527181,
   -0.02641125,
   -0.03481659};
   Double_t _fex1055[14] = {
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
   Double_t _fey1055[14] = {
   0.0455604,
   0.03727201,
   0.03272909,
   0.02947037,
   0.02751798,
   0.02601616,
   0.02596023,
   0.02501775,
   0.0258165,
   0.02606346,
   0.02731647,
   0.02771823,
   0.02932847,
   0.0320793};
   TGraphErrors *gre = new TGraphErrors(14,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","S12_",100,649.5,2599.5);
   Graph_Graph1055->SetMinimum(-0.1315902);
   Graph_Graph1055->SetMaximum(0.118992);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1055->GetXaxis()->CenterTitle(true);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1055->GetYaxis()->CenterTitle(true);
   Graph_Graph1055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1055->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   
   TF1 *pol01056 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01056->SetFillColor(19);
   pol01056->SetFillStyle(0);
   pol01056->SetLineColor(2);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(11.17838);
   pol01056->SetNDF(13);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,-0.008257397);
   pol01056->SetParError(0,0.007688975);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0083
#pm0.008
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
